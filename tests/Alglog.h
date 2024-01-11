/*
 * @Author       : hh
 * @Date         : 2024-01-03 10:57:28
 * @LastEditors  : your Name
 * @LastEditTime : 2024-01-11 18:18:42
 * @Description  : 
 */
#ifndef _ALGLOG_H_
#define _ALGLOG_H_

#include <stdio.h>

#ifdef LOG_TRACE_ON 
#define LOG_TRACE(fmt, ...) \
    do { \
        printf("[ TRACE ]: \t");\
        printf(fmt "\n", ##__VA_ARGS__); \
    } while(0);
#define LOG_TARCE_ARRAY(arr, len, format) \
    do { \
        printf("[ TRACE ]: \t");\
        for (int i = 0; i < len; i++) printf(format" ", arr[i]); \
        printf("\n"); \
    } while(0);
#else
#define LOG_TRACE(fmt, args...) 
#define LOG_TARCE_ARRAY(arr, len, format)
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

#endif // _ALGLOG_H_