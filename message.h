#ifndef message_h
#define message_h

#include <stdio.h>

typedef struct message {
    // crc校验值
    int msg_crc;
    // 报文大小
    int msg_size;
    // message 唯一标识
    int msg_key;
    // 存放要发送的报文
    char *msg_value;
    
}message;

/* 创建一个Messsage
 */
message do_creat_message(int crc, int size, int key, char *msg);

/* 计算crc校验值
 */
int message_crc32(message *self);

/* 检查报文合法性
 */
int message_isvalid();

#endif
