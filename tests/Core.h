#ifndef _CORE_H_
#define _CORE_H_

#include <stdbool.h>
#include <stdlib.h>
#include "Alglog.h"

#define MAX_QUEUE_SIZE 5
#define MAX_STACK_SIZE 5
#define MAX_VERTEX_NUM 10
#define ElemType int
#define INVALID_ELEM_VALUE 1<<31
#define ValueType int
#define VertexType char

#define DLL_EXPORTS
#if defined _WIN32 || defined __CYGWIN__
# ifdef DLL_EXPORTS
#  ifdef __GNUC__
#   define LIB_API __attribute__ ((dllexport))
#  else
#   define LIB_API __declspec(dllexport) // Note: actually gcc seems to also supports this syntax.
#  endif
# else
#  ifdef __GNUC__
#   define LIB_API __attribute__ ((dllimport))
#  else
#   define LIB_API __declspec(dllimport) // Note: actually gcc seems to also supports this syntax.
#  endif
# endif
# define LIB_INTERNAL
#else
# if __GNUC__ >= 4
#  define LIB_API __attribute__((visibility ("default")))
#  define LIB_INTERNAL  __attribute__((visibility ("hidden")))
# else
#  define LIB_API
#  define LIB_INTERNAL
# endif
#endif

#endif // _CORE_H_