#include <stdio.h>
#include <string.h>
#include <pthread.h>

void* run_in_thread(void* arg) {
    printf("Created a new thread");
    
    return NULL;
 }

int main(){

    printf("%s\n","Main therad running!");

    pthread_t thread1;

    pthread_create(&thread1, NULL, run_in_thread, NULL);

    pthread_join(thread1, NULL);

    return 0;
}