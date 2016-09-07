#ifndef reqandrep_h
#define reqandrep_h

#include <stdio.h>
#include "message.h"

/*消息发送与接收处理状态迁移标识
 */
typedef enum transmitstatus
{
    TO_SEDN,
    SENDING,
    SEND_SUCCESS,
    SEND_FAILED,
    REC_NO_PRESIST,
    REC_PRESIST,
    REC_SUCCESS,
    REC_FAILED
}transmitstatus;

/* 一次socket请求的数据结构
 是存放在队列中的实体
 */
typedef struct request
{
    //Api编号
//    int api_key;
    //Api版本号
//    int api_verison;
    //IP地址与端口号
    char *url;
    /*此次请求的唯一标识
     在一次完整的报文传递过程中
     请求与回应的标识号不变
     */
    int correlation_id;
    //时间戳
    time_t time_stamp;
    //发送状态记录
    transmitstatus status;
    //消息实体
    message *msg;
    
}request;

typedef struct response
{
    //此次回应的唯一标识
    int correlation_id;
    //时间戳
    time_t time_stamp;
    //接收状态记录
    transmitstatus status;
}response;

request do_creat_request(char *url, int corr_id, message *msg);

void print_requset(request *self);

response do_creat_response(int corr_id);

void print_response(response *self);

#endif
