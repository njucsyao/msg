#ifndef global_h
#define global_h

#include <stdio.h>
#include "cqueue.h"

//初始发送队列
c_queue *send_queue;
//等待队列
c_queue *wait_queue;
//死信队列
c_queue *dead_queue;

#endif
