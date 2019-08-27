/*
 * GPIOs.c
 *
 *  Created on: 20 ago. 2019
 *      Author: david8
 */
#include "Aplicacion.h"

void GPIOs_SetPINSEL(uint32_t Port, uint32_t Pin, uint32_t Func){
	Port	=	Port*2 + (Pin/16);
	Pin		=	(Pin%16)*2;
	PINSEL[Port] &=	~(1 << Pin);
	PINSEL[Port] |= (Func<<Pin);
}
void GPIOs_SetDIR(uint32_t Port, uint32_t Pin, uint32_t Dir){
	GPIOs[Port].FIODIR &= ~(1<<Pin);
	GPIOs[Port].FIODIR |= (Dir << Pin);
}
void GPIOs_SetPINMODE(uint32_t Port, uint32_t Pin, uint32_t Mode){
	Port	=	Port*2 + (Pin/16);
	Pin		=	(Pin%16)*2;
	PINMODE[Port] &=	~(1 << Pin);
	PINMODE[Port] |= (Mode<<Pin);
}
void GPIOs_setPINMODE_OD(uint32_t Port, uint32_t Pin, uint32_t Mode){
	PINMODE_OD[ Port ] = PINMODE_OD[ Port ] & ( ~ ( 1 << Pin ) );
	PINMODE_OD[ Port ] = PINMODE_OD[ Port ] | ( Mode << Pin );
}
void GPIOs_SetPIN(uint32_t Port, uint32_t Pin, uint32_t Estado){
	if(1==Estado)
		GPIOs[Port].FIOSET = (1<<Pin);
	else
		GPIOs[Port].FIOCLR = (1 << Pin);
}
uint32_t GPIOs_getPIN(uint32_t Port, uint32_t Pin){
	return ( (GPIOs[Port].FIOPIN>>Pin)&0x01)? 1:0;
}
