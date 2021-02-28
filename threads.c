#include <stdio.h>
#include <string.h>
#include <pthread.h>

int i = 6;

void* Thread( void* p ) {
  printf("Value recevied as argument in starting routine: ");
  printf("%d\n", * (int*)p);
  return &i;
}

int main() {

  pthread_t id;
  int j = 1;
  pthread_create(&id, NULL, Thread, &j);
    
  int* ptr;

  pthread_join(id, (void**)&ptr);
  printf("Value recevied by parent from child: ");
  printf("%d\n", *ptr);
}