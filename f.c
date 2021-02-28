
#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h> 
#include<sys/types.h>

void ChildProcess();
 
int main( int args ) {
    printf("\n\n****OUTPUT****\n\n"); 
    pid_t pid;
    pid = fork();
    if( pid==0 ) { ChildProcess( args ); }
    else {
        printf("Waiting for child process to complete\n");
        wait(NULL);
    }
}
void ChildProcess( int n ) {
    while( n!=1 ) {
        if( n%2 == 0 ) {
            printf("%d ", n);
            n = n/2;
        }
        else {
            printf("%d ", n);            
            n = 3*n + 1;
        }
    }
    printf("1\n");
}