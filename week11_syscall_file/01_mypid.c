#include <stdio.h>
#include <unistd.h>
int main(){
    pid_t my_pid = getpid();
    printf("pid : %d\n",my_pid);
    return 0;
}