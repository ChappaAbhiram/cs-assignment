#include <stdio.h>

#include <sys/types.h>

#include <unistd.h>

int main()
{
         int value;
         printf("Enter a positive integer value: ");
         scanf("%d", &value);
         printf("\n");
         if (value <= 0)
         {
         printf("ERROR: Integer value must be positive!");
         return 1;
         }
         pid_t p;
         p = fork();
         if (p<0)
         {
         printf("FORK FAILED\n");
         return 1;
         }
         else if(p==0)
         {
                 printf("child is working..\n");
                 printf("%d\n",value);
         while(value!=1)
         {
         if (value%2 ==0)
         {
         value=value/2;
         }
         else if(value%2==1)
         {
         value = 3 * (value) + 1  ;                                                                                                                                                                                         }
         printf("%d\n",value);
         }
         printf("child process completed\n");
         }
         else
         {
                 printf("parent waiting on child process\n");
                 wait();
                 printf("parent process is completed\n");
         }
         return 0;
}