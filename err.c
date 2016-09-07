#include "err.h"
#include "likely.h"
#include <stdlib.h>
#include <execinfo.h>

/* 追踪调用堆栈信息
 */
void backtrace_print (void)
{
    void *frames[30];
    int size;
    size = backtrace(frames, sizeof(frames)/sizeof(frames[0]));
    if(size > 1)
    {
        backtrace_symbols_fd(&frames[1], size-1, fileno(stderr));
    }
}

/* 终止程序
 */
void err_abort(void)
{
    abort();
}

/*
 自定义编译优化的assert
 */
void c_assert(int v)
{
    if(unlikely(!(v)))
    {
        backtrace_print();
        err_abort();
    }
}

/* errnum 转换为 string
 */
const char *err_tostr(int errnum)
{
    switch (errnum) {
            //            todo
        case 1:
            return "1";
            break;
            
        default:
            return "0";
            break;
    }
}
