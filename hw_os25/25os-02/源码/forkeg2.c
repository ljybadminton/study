<<<<<<< HEAD
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
    int x=1;
    pid_t p=fork();
    if(p<0){
        perror("fork fail");
        exit(1);
    }else if(p==0)
        printf("Child has x= %d\n",++x);
    else
        printf("Parent has x=%d\n",--x);
    return 0;
=======
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
    int x=1;
    pid_t p=fork();
    if(p<0){
        perror("fork fail");
        exit(1);
    }else if(p==0)
        printf("Child has x= %d\n",++x);
    else
        printf("Parent has x=%d\n",--x);
    return 0;
>>>>>>> 84b8b335fb0b95768980ed662c4c9ed1b1afae9d
}