#include "Aplicacion.h"

void Inicializar(){
	GPIOs_SetPINSEL(LEDXPRESSO,0);
	GPIOs_SetDIR(LEDXPRESSO,1);
	GPIOs_SetPIN(LEDXPRESSO,0);
	InicializarSysTick();
	Inicializar_LEDRGB();
}


void Inicializar_LEDRGB( void ){

	GPIOs_SetPINSEL(LED_RGBB,PINSEL_GPIO);				//!< Elige funcion de pin como GPIO
	GPIOs_SetPINSEL(LED_RGBG,PINSEL_GPIO);				//!< Elige funcion de pin como GPIO
	GPIOs_SetPINSEL(LED_RGBR,PINSEL_GPIO);				//!< Elige funcion de pin como GPIO
	GPIOs_setPINMODE_OD(LED_RGBB,PUSH_PULL);					//!< Elige GPIO como PUSH PULL
	GPIOs_setPINMODE_OD(LED_RGBG,PUSH_PULL);					//!< Elige GPIO como PUSH PULL
	GPIOs_setPINMODE_OD(LED_RGBR,PUSH_PULL);					//!< Elige GPIO como PUSH PULL
	GPIOs_SetDIR (LED_RGBB,SALIDA);						//!< Elige dirección de GPIO como salida
	GPIOs_SetDIR (LED_RGBG,SALIDA);						//!< Elige dirección de GPIO como salida
	GPIOs_SetDIR (LED_RGBR,SALIDA);						//!< Elige dirección de GPIO como salida

	GPIOs_SetPIN(LED_RGBB,OFF);
	GPIOs_SetPIN(LED_RGBG,OFF);
	GPIOs_SetPIN(LED_RGBR,OFF);
}
