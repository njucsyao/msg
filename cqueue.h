#ifndef cqueue_h
#define cqueue_h

#include <stdio.h>
#include "reqandrep.h"

/* Queue node */
typedef struct c_queue_item {
    struct c_queue_item *next;
    request req_bobdy;
}c_queue_item;

/* Msg queue */
typedef struct c_queue {
    struct c_queue_item *head;
    struct c_queue_item *tail;
}c_queue;

#define NOT_IN_QUEUE ((struct c_queue_item *) -1)

void do_queue_init(c_queue *self);

void do_item_init(c_queue_item *self);

void do_queue_term(c_queue *self);

void do_item_term(c_queue_item *self);

void do_push(c_queue *self, c_queue_item *item);

void do_remove(c_queue *self, c_queue_item *item);

c_queue_item *do_pop(c_queue *self);

int isinqueue(c_queue_item *item);

int isempty(c_queue *self);

void print_queue(c_queue *self);

#endif 
