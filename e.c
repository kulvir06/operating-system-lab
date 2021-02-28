
#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h> 
#include<sys/types.h>

void Client();
void Server();

int ch[26];
int main() {
    printf("\n\n****OUTPUT****\n\n"); 
    pid_t pid;
    pid = fork();
    if( pid==0 ) { Client(); }
    else {
        printf("Data stored by server in memory ------>\n");
        Server();
        printf("Client accessing the same memory location\n");
        wait(NULL);
    }
}
void Server() {
  int k = 97;
  for(int i=0;i<26;i++) {
    ch[i] = k;
    k++;
    printf("%c",ch[i]);    
  }  
  printf("\n");  
}
void Client() {
  printf("Data modified by client------>\n");
  int k=65;
    for(int i=0;i<26;i++) {
    ch[i] = k;
    k++;
    printf("%c",ch[i]);    
  }  
  printf("\n");     
}