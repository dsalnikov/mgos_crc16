#ifndef __MGOS_CRC_16_H__
#define __MGOS_CRC_16_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



/*
 * crc16 calculation
 * 
 * Params:
 * buff - pointer to input buffer
 * len - length of the buffer
 *
 * Returns:
 * crc16 value
 * 
 */
uint16_t crc16(uint16_t *buff, uint32_t len);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MGOS_CRC_16_H__ */