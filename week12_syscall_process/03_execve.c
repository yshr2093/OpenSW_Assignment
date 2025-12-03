#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>



int main (int argc, char* argv[])
{
    if (argc < 2) {
        printf("Usage : ./03_execve <program path> [OPTION] ... \n");
        exit(0);
    }
    pid_t child_pid = fork();
    if (child_pid == 0) {
        char** small_argv = (char**)malloc(sizeof(char*)*argc);
        for (int i = 1; i < argc; i++)small_argv[i-1] = argv[i];
        execve(argv[1],small_argv,NULL);
        free(small_argv);
        return 1;
    }
    else {
        int wstatus;
        waitpid(child_pid,&wstatus,0);
        if (WIFEXITED(wstatus)) {
            printf("exited status : %d\n",WEXITSTATUS(wstatus));
        }
        
    }

    return 0;
}