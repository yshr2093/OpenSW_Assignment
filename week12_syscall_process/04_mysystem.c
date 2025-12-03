#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int mysystem(const char* command) {
    pid_t child_pid = fork();
    if (child_pid == 0) {
        execl("/bin/sh","sh","-c",command, (char*) NULL);
    }
    else{
        int wstatus;
        waitpid(child_pid,&wstatus,0);
    }

}

int main(void) {
   

    mysystem("ls -l | wc -l");
    mysystem("find . -name '*.c'");
    printf("Good Bye~\n");

    return 0;
}