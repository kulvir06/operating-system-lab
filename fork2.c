#include<stdio.h>
#include<sys/types.h>

void ChildProcess();
void ParentProcess();

int main() {
    printf("\n\n****OUTPUT****\n\n"); 
    pid_t pid;
    pid = fork();
    if( pid==0 ) { ChildProcess(); }
    else { ParentProcess(); }
}
void ChildProcess() { printf("This is the Child Process\n"); }
void ParentProcess() { printf("This is the Parent Process\n"); }
