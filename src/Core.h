#ifndef _UTIL_H_
#define _UTIL_H_
#include "Error.h"

#ifdef LOG_TRACE_ON 
#define LOG_TRACE(fmt, ...) \
    do { \
        printf("[ TRACE ]: \t");\
        printf(fmt "\n", ##__VA_ARGS__); \
    } while(0);
#else
#define LOG_TRACE(fmt, args...) 
#endif
#define LOG_WARNING(fmt, ...) \
    do { \
        printf("[WARNING]:\t");\
        printf(fmt "\n", ##__VA_ARGS__); \
    } while(0);
#define LOG_ERROR(fmt, ...) \
    do{ \
        printf("[ ERROR ]:\t");\
        printf(fmt "\n", ##__VA_ARGS__);\
    }while(0);

#define CHK_NUM(num, value, sign) if(num sign value) \
    LOG_ERROR("check num: "#num" must "#sign" "#value) \
    rv = WRONG_PARAM_NUMBER, goto err;

#define CHK_NULLPOINT(p) if (!p) \
    LOG_ERROR("check point: "#p" is nullpoint") \
    rv = WRONG_PARAM_NULLPOINTER, goto err;

#define CHK_POINT(p) if (p) \
    LOG_ERROR("check point: "#p" must be nullpoint") \
    rv = WRONG_PARAM_POINTER, goto err;

#endif // _UTIL_H_