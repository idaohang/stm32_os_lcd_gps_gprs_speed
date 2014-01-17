#ifndef __DRIV_HMC5883L_BMP085_H__
#define __DRIV_HMC5883L_BMP085_H__

#include <stdint.h>
#include <stdbool.h>

void driv_hmc5883l_bmp085_init(void);
bool driv_hmc5883l_bmp085_read_compass(uint8_t *buf);
bool driv_hmc5883l_bmp085_read_accelerometer(uint8_t *buf);

#endif
