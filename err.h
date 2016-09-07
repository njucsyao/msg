#ifndef err_h
#define err_h

#include <stdio.h>

void backtrace_print (void);

void err_abort(void);

void c_assert(int v);

const char *err_tostr(int errnum);

#endif
