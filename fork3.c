
#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
int main() 
{ 
    printf("\n\n****OUTPUT****\n\n"); 
    char *args[]={"./EXEC",NULL}; 
    execv(args[0],args); 
    printf("Ending-----"); 
    return 0; 
} 