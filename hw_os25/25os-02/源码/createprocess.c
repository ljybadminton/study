<<<<<<< HEAD
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    pid_t child_pid;
    child_pid = fork();
    if(child_pid < 0){
        //Fork filed
        perror("Fork failed");
        return 1;
    }else if(child_pid == 0){
        printf("Child process: My PID is %d\n", getpid());
    }
    else{
        printf("Parent process: My PID is %d\n", getpid());
        printf("Parent process: Child process id is %d\n", child_pid);
    }
    return 0;
=======
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    pid_t child_pid;
    child_pid = fork();
    if(child_pid < 0){
        //Fork filed
        perror("Fork failed");
        return 1;
    }else if(child_pid == 0){
        printf("Child process: My PID is %d\n", getpid());
    }
    else{
        printf("Parent process: My PID is %d\n", getpid());
        printf("Parent process: Child process id is %d\n", child_pid);
    }
    return 0;
>>>>>>> 84b8b335fb0b95768980ed662c4c9ed1b1afae9d
}