#ifndef cthread_h
#define cthread_h

#include <stdio.h>
#include <pthread.h>

typedef void (thread_routine) (void*);

typedef struct c_thread
{
    thread_routine *routine;
    void *arg;
    pthread_t handle;
}c_thread;

#endif
