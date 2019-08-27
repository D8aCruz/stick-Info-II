/*
 * Define.h
 *
 *  Created on: 20 ago. 2019
 *      Author: david8
 */

#ifndef DEFINE_H_
#define DEFINE_H_


#include <cr_section_macros.h>
#include <stdio.h>
#include "Regs.h"
#include "GPIOs.h"
#include "SysTick.h"

#define LEDXPRESSO PORT0,22

#define		LED_RGBB	PORT2,1		//!< LED
#define		LED_RGBG	PORT2,3		//!< LED
#define		LED_RGBR	PORT2,2		//!< LED


void Inicializar();
void Inicializar_LEDRGB( void );

#define		ACTIVO_BAJO		0
#define		ACTIVO_ALTO		1

//!< dirección en FIODIR
#define 	ENTRADA			0
#define 	SALIDA			1

//!< definición en PIN MODE_OD
#define 	PUSH_PULL		0
#define 	OPEN_DRAIN		1

#define		OFF		0
#define		ON		1

#endif /* DEFINE_H_ */
