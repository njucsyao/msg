#include "cthread.h"
#include <signal.h>

//static void *thread_main_routine (void *arg)
//{
//    c_thread *self;
//    
//    self = (c_thread*) arg;
//    
//    /*  Run the thread routine. */
//    self->routine (self->arg);
//    return NULL;
//}
//
//void nn_thread_init (struct c_thread *self,thread_routine *routine, void *arg)
//{
//    int rc;
//    sigset_t new_sigmask;
//    sigset_t old_sigmask;
//    
//    rc = sigfillset (&new_sigmask);
//    errno_assert (rc == 0);
//    rc = pthread_sigmask (SIG_BLOCK, &new_sigmask, &old_sigmask);
//    errnum_assert (rc == 0, rc);
//    
//    self->routine = routine;
//    self->arg = arg;
//    rc = pthread_create (&self->handle, NULL, thread_main_routine,
//                         (void*) self);
//    errnum_assert (rc == 0, rc);
//    
//    /*  Restore signal set to what it was before. */
//    rc = pthread_sigmask (SIG_SETMASK, &old_sigmask, NULL);
//    errnum_assert (rc == 0, rc);
//}
//
//void nn_thread_term (struct nn_thread *self)
//{
//    int rc;
//    
//    rc = pthread_join (self->handle, NULL);
//    errnum_assert (rc == 0, rc);
//}
