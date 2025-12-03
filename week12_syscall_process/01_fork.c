#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(void)
{
    pid_t child_pid = fork();
    if (child_pid == 0 ) {
        printf("child PID : %lu\n, Parent PID : %lu\n",(unsigned long)getpid(),(unsigned long)getppid()); 
        return 7;   
    }
    else
    {
        int wstatus;
        waitpid(child_pid,&wstatus,0);
        if (WIFEXITED(wstatus))
        {
            printf("exited status code : %d\n",WEXITSTATUS(wstatus));
        }
        printf("Parent PID : %lu\n, Parent parent PID : %lu\n",(unsigned long)getpid(),(unsigned long)getppid());

    }

    return 0;
}