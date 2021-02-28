#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//driver code
int main() {
    printf("\n\n****OUTPUT****\n\n");
    int pid, pid1, pid2;

    pid = fork();
    
    if( pid==0 ) {
        sleep(3);
        printf("child[1] --> process id = %d and parent process id = %d\n", getpid(), getppid());
    }
    else {
        pid1 = fork();

        if( pid1==0 ){
            sleep(2);
            printf("child[2] --> process id = %d and parent process id = %d\n", getpid(), getppid());
        }
        else {
            pid2 = fork();
            
            if( pid2==0 )
             printf("child[3] --> process id = %d and parent process id = %d\n", getpid(), getppid());
            else {
                sleep(5);
                printf("parent --> process id = %d\n", getpid()); 
            }
        }
    }
}