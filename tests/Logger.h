/*
 * @Author       : hh
 * @Date         : 2024-01-03 10:57:28
 * @LastEditors  : hh
 * @LastEditTime : 2024-01-03 10:57:29
 * @Description  : 
 */
#ifndef _LOGGER_H_
#define _LOGGER_H_

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

#endif // _LOGGER_H_