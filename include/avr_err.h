#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#define ZH_ERROR_CHECK(cond, err, ...) \
    if (!(cond))                       \
    {                                  \
        return err;                    \
    }

    typedef enum
    {
        AVR_FAIL = -1,
        AVR_OK,
        AVR_ERR_NO_MEM,
        AVR_ERR_INVALID_ARG,
        AVR_ERR_INVALID_STATE,
        AVR_ERR_INVALID_SIZE,
        AVR_ERR_NOT_FOUND,
        AVR_ERR_NOT_SUPPORTED,
        AVR_ERR_TIMEOUT,
        AVR_ERR_INVALID_RESPONSE,
        AVR_ERR_INVALID_CRC,
        AVR_ERR_INVALID_VERSION,
        AVR_ERR_NOT_FINISHED,
        AVR_ERR_NOT_ALLOWED
    } avr_err_t;

#ifdef __cplusplus
}
#endif