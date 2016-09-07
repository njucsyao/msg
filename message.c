#include "message.h"

message do_creat_message(int crc, int size, int key, char *msg)
{
    message it;
    it.msg_crc = crc;
    it.msg_size = size;
    it.msg_key = key;
    it.msg_value = msg;
    return it;
}
/* 计算crc校验值
 */
int message_crc32(message *self)
{
    //TODO
    return 1;
}

/* 检查报文合法性
 */
int message_isvalid()
{
    //TODO
    return 1;
}