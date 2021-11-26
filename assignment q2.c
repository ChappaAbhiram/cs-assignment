#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
#include<ctype.h>

int main()
{
        int p1[2];
        int p2[2];
        int i;
        char buf[80];
        int p;

        if (pipe(p1)< 0)
        {
        fprintf(stderr, "error in creating pipe1" );
        return 1;
        }
        if (pipe(p2)<0)
        {
        fprintf(stderr, "error in creating pipe2" );
        return 1;
        }
        printf("Enter a string : ");
        fgets(buf,sizeof(buf),stdin);
        p = fork();

        if (p < 0)
        {
        fprintf(stderr, "fork failure" );
        return 1;}

        else if (p > 0)
        {
        close(p1[0]);
        write(p1[1], buf, strlen(buf)+1);
        close(p1[1]);
          close(p2[1]);
        read(p2[0], buf, sizeof(buf));
        printf("Parent received string from child is output %s\n",buf);
        close(p2[0]);
        }
        else
        {
        close(p1[1]);
        read(p1[0], buf, sizeof(buf));
        close(p1[0]);
        close(p2[0]);
        printf("Child received string from parent is input %s\n",buf);
        for(i = 0; i < strlen(buf); i++)
        {
        if(islower(buf[i]))
        {
        buf[i]=toupper(buf[i]);
        }
        else if(isupper(buf[i]))
        {
        buf[i]=tolower(buf[i]);
        }
        }
        write(p2[1], buf, strlen(buf)+1);
        close(p2[1]);
        exit(0);
        }
        }