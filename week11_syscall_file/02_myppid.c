#include <stdio.h>
#include <unistd.h>
int main(){
    pid_t my_pid = getpid();
    pid_t my_ppid = getppid();
    printf("pid : %d\n",my_pid);
    printf("ppid : %d\n",my_ppid);
    return 0;
}