#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(void)
{
    pid_t child_pid = fork();
    if (child_pid == 0 ) {
        sleep(1);
        printf("child PID : %lu\n, Parent PID : %lu\n",(unsigned long)getpid(),(unsigned long)getppid());
        
        return 7;   
    }
    else
    {
       
        printf("Parent PID : %lu\n, Parent parent PID : %lu\n",(unsigned long)getpid(),(unsigned long)getppid());

    }

    return 0;
}