#include <stdio.h>
#include <string.h>
#include <pthread.h>

int factorial = 1;

void* Thread( void* p ) {
    int x = * (int*)p;
    for( int i=1; i<=x; i++ ) {
        if( x%i==0 ) { 
            factorial *= i;
        }
    }
    return &factorial;    
}

int main() {    
    int num;
    printf("enter a number\n");
    scanf("%d",&num);

    pthread_t id;
    pthread_create(&id, NULL, Thread, &num);
    int* ptr;
    pthread_join(id, (void**)&ptr);
    printf("Factorial = %d",*ptr);
    return 0;
}