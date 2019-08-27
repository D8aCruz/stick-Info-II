/*
 * GPIOs.h
 *
 *  Created on: 20 ago. 2019
 *      Author: david8
 */

#ifndef GPIOS_H_
#define GPIOS_H_

#include "Aplicacion.h"

void GPIOs_SetPINSEL(uint32_t Port, uint32_t Pin, uint32_t Func);
void GPIOs_SetDIR(uint32_t Port, uint32_t Pin, uint32_t Dir);
void GPIOs_SetPINMODE(uint32_t Port, uint32_t Pin, uint32_t Mode);
void GPIOs_setPINMODE_OD(uint32_t Port, uint32_t Pin, uint32_t Mode);
void GPIOs_SetPIN(uint32_t Port, uint32_t Pin, uint32_t Estado);
uint32_t GPIOs_getPIN(uint32_t Port, uint32_t Pin);

#endif /* GPIOS_H_ */
