#include <stdio.h>
#include <string.h>
#include <pthread.h>

void* Thread( void* p[] ) {
    char new_str =  *(char*)p;
    printf("%s",new_str);
    // return &new_str;  
}

int main() {

  pthread_t id;
  char str[] = "abcdefghijklmnopqrstuvwxyz";
  pthread_create(&id, NULL, Thread, &str);
    
//   char* ptr[];
//   pthread_join(id, (void**)&ptr);
//   printf("%s\n", *ptr);
} 