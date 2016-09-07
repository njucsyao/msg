#include <stdio.h>
#include "cqueue.h"
#include <time.h>

int main(int argc, const char * argv[]) {
    /*消息和请求创建测试
     */
    
//    message msg;
//    msg = do_creat_message(0, 1, 1, "msg");
//    printf("%d%d%d%s",msg.msg_crc,msg.msg_size,msg.msg_key,msg.msg_value);
//    printf("\n");
//    
//    request req;
//    req = do_creat_request("192.168.1.1:24", 1, &msg);
//    printf("%d",req.msg->msg_key);
    
    /*队列处理测试测试
    */
    
//    clock_t start, stop;
//    start = clock();
//    c_queue example4test;
//    do_queue_init(&example4test);
//    print_queue(&example4test);
//    
//    c_queue_item item[10];
//    for(int i = 0;i < 10;i++)
//    {
//        do_item_init(&item[i]);
//        item[i].req_bobdy.correlation_id = i;
//    }
//    
//    for(int i = 0;i < 5;i++)
//        do_push(&example4test, &item[i]);
//    
//    print_queue(&example4test);
//    
//    for(int i = 0;i < 2;i++)
//        do_pop(&example4test);
//    
//    print_queue(&example4test);
//    
//    for(int i = 5;i < 10;i++)
//        do_push(&example4test,&item[i]);
//    
//    print_queue(&example4test);
//    
//    stop = clock();
//    double s =(stop-start);
//    printf("%lf",s);
    
    return 0;


}
