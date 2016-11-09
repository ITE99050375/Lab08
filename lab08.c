#include<stdio.h>
int main(){
    int pid;
    int status = 0;
    int i = 0;
    int selfPid;
    int parentPid;
    for(i = 0;i < 3;i++){
        pid = fork();
        if(pid != 0){
            printf("儿子的pid=%d\n",pid);
            pid = wait(&status);
        }
        else{
            selfPid = getpid();
            parentPid = getppid();
            printf("自己的pid=%d\n",selfPid);
            printf("父亲的pid=%d\n",parentPid);
            exit(status);
        }
    }
}