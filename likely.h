#ifndef likely_h
#define likely_h

#if defined __GNUC__ || defined __llvm__
#define likely(x) __builtin_expect ((x), 1)
#define unlikely(x) __builtin_expect ((x), 0)
#else
#define likely(x) (x)
#define unlikely(x) (x)
#endif

#endif
