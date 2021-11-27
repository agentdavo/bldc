/*

*/

#ifndef HW_PAC55XX_COMMON_H_
#define HW_PAC55XX_COMMON_H_

#include "pac5xxx.h"
#include "pac5xxx_driver_gpio.h"
#include "pac5xxx_driver_system.h"

#ifndef PAC5XXX_OK
#define PAC5XXX_OK      0
#endif

#ifndef PAC5XXX_ERROR
#define PAC5XXX_ERROR   1
#endif

#define READ_UINT16(address)                      (*((uint16_t *) address))
#define READ_UINT32(address)                      (*((uint32_t *) address))

#endif /* HWCONF_DRV_PAC55XX_H */