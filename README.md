Question 1 :
The Collatz conjecture concerns what happens when we take any positive integer n and apply the following algorithm:
n ={ n∕2, if n is even
     3 × n + 1, if n is odd
The conjecture states that when this algorithm is continually applied,all positive integers will eventually reach 1.
For example, if n = 35, the sequence is 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1.
Write a C program using the fork() system call that generates this sequence in the child process. The starting number will be provided from the command line.
For example, if 8 is passed as a parameter on thecommand line, the child process will output 8, 4, 2, 1.
Because the parent and child processes have their own copies of the data, it will benecessary for the child to output the sequence. Have the parent invoke the wait() call to 
wait for the child process to complete before exitingthe program. Perform necessary error checking to ensure that a positive integer is passed on the command line.

Question 2 :
Design a program using ordinary pipes in which one process sends a string message to a second process, and the second process reverses
the case of each character in the message and sends it back to the first process.
For example, if the first process sends the message Hi There,the second process will return hI tHERE.
This will require using two pipes, one for sending the original message from the first to the second process and the other for sending the modified message from the second
to the first process. You can write this program using either UNIX or Windows pipes.

The codes of the above questions 1 and 2 respectively are attached in the files
[assignment codes.zip](https://github.com/ChappaAbhiram/cs-assignment/files/7611333/assignment.codes.zip)

The output pngs of the above questions 1 and 2 respectively are below :
![output q1](https://user-images.githubusercontent.com/94036639/143671337-7ae38b3e-c0f0-4011-b536-408a370290d2.png)
![output q2](https://user-images.githubusercontent.com/94036639/143671338-f9d48f82-be82-4468-bcc0-3c3fceaaa407.png)

References for the solutions are taken from :
https://github.com/SeanStaz/theCollatzConjecture.c
https://www.chegg.com/homework-help/questions-and-answers/design-program-using-ordinary-pipes-one-process-sends-string-message-second-process-second-q34794487


