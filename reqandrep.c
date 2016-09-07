#include "reqandrep.h"
#include <time.h>

request do_creat_request(char *url, int corr_id, message *msg)
{
    request it;
    
    it.url = url;
    it.correlation_id = corr_id;
    time(&it.time_stamp);
    it.status = 0;
    it.msg = msg;
    
    return it;
}

response do_creat_response(int corr_id)
{
    response it;
    
    it.correlation_id = corr_id;
    time(&it.time_stamp);
    it.status = 4;
    
    return it;
}

void print_requset(request *self)
{
    
}

void print_response(response *self);
