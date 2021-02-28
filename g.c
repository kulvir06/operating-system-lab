#include <stdio.h>
#include <string.h>
#include <pthread.h>

int avg, max, min;

void* avgThread( int p[] ) {
    int length = sizeof(p);
    int sum = 0;
    for(int i=0; i<length; i++)
    sum += p[i];
    avg = sum/(length+1);
    return &avg;    
}

void* maxThread( int p[] ) {
    int length = sizeof(p);
    for(int i=0; i<length; i++)
    if(p[i]>max)
    max = p[i];
    return &max;

}
void* minThread( int p[] ) {
    min = p[0];
    int length = sizeof(p);
    for(int i=0; i<length; i++)
    if(p[i]<min)
    min = p[i];
    return &min;
}


int main(int args[]) {
  pthread_t id,id1,id2;
  
  pthread_create(&id, NULL, avgThread, &args);
  pthread_create(&id1, NULL, maxThread, &args);
  pthread_create(&id2, NULL, minThread, &args);
    
  int* ptr;
  int* ptr1;
  int* ptr2;

  pthread_join(id, (void**)&ptr);
  pthread_join(id1, (void**)&ptr1);
  pthread_join(id2, (void**)&ptr2);

  printf("Average = %d\n", *ptr);
  printf("Maximum = %d\n",*ptr1);
  printf("Minimum = %d\n", *ptr2);
}