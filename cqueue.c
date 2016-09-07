#include <stddef.h>
#include "cqueue.h"
#include "err.h"

void do_queue_init (c_queue *self)
{
    self->head = NULL;
    self->tail = NULL;
}

void do_item_init (c_queue_item *self)
{
    self->next = NOT_IN_QUEUE;
}

void do_queue_term (c_queue *self)
{
    self->head = NULL;
    self->tail = NULL;
}

int isempty(c_queue *self)
{
    return self->head ? 0 : 1;
}

void do_push(c_queue *self, c_queue_item *item)
{
    c_assert(item->next == NOT_IN_QUEUE);
    
    item->next = NULL;
    if(!self->head)
        self->head = item;
    if(self->tail)
        self->tail->next = item;
    self->tail = item;
}

struct c_queue_item *do_pop(c_queue *self)
{
    c_queue_item *result;
    
    if(!self->head)
        return NULL;
    result = self->head;
    self->head = result->next;
    if(!self->head)
        self->tail = NULL;
    result->next = NOT_IN_QUEUE;
    return result;
}


void do_remove(c_queue *self, c_queue_item *item)
{
    c_queue_item *it;
    c_queue_item *prev;
    
    if (item->next == NOT_IN_QUEUE)
        return;
    
    prev = NULL;
    for (it = self->head; it != NULL; it = it->next) {
        if (it == item) {
            if (self->head == it)
                self->head = it->next;
            if (self->tail == it)
                self->tail = prev;
            if (prev)
                prev->next = it->next;
            item->next = NOT_IN_QUEUE;
            return;
        }

    }
}

//int isinqueue(c_queue_item *item)
//{
//    
//}

void print_queue(c_queue *self)
{
    if(!self->head)
        printf("---This queue is empty---");
    
    c_queue_item *it;
    for(it = self->head; it != NULL; it = it->next)
    {
        printf("%d",it->req_bobdy.correlation_id);
    }
    printf("\n");
}
