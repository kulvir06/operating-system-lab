
#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h> 
  
int main() 
{
    printf("\n\n****OUTPUT****\n\n"); 
    if (fork()== 0) 
        printf("Child Process: hello from child\n"); 
    else
    { 
        printf("Parent Process: hello from parent\n"); 
        printf("***Waiting for Child Process to execute***\n"); 
        wait(NULL); 
        printf("Child Process: child has terminated\n"); 
    } 
    return 0; 
} 