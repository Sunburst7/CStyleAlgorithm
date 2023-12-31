#ifndef _ERROR_H_
#define _ERROR_H_
#include <stdint.h>

typedef uint32_t ERRNO;

#define OK                              0x00000000
#define NO_SUPPORT                      0x00000001

#define WRONG_PARAM                     0x00000010
#define WRONG_PARAM_NUMBER              (WRONG_PARAM + 1)
#define WRONG_PARAM_NULLPOINTER         (WRONG_PARAM + 2)
#define WRONG_PARAM_POINTER             (WRONG_PARAM + 3)

#define CHK_NUM(num, value, sign) if(num sign value) {\
    LOG_ERROR("check num: "#num" is "#sign" "#value) \
    rv = WRONG_PARAM_NUMBER; goto cleanup; \
}

#define CHK_NULLPOINT(p) if (!p) \
    LOG_ERROR("check point: "#p" is nullpoint") {\
    rv = WRONG_PARAM_NULLPOINTER; goto cleanup; \
}

#define CHK_POINT(p) if (p) \
    LOG_WARNING("check point: "#p" must be nullpoint") {\
    rv = WRONG_PARAM_POINTER; goto cleanup; \
}

#endif // _ERROR_H_