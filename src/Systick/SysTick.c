#include "Aplicacion.h"

void InicializarSysTick(void){
  STRELOAD = ( STCALIB / 4) - 1;
  STCURR = 0;
  CLKSOURCE = 1;
  ENABLE = 1;
  TICKINT = 1;
}

void SysTick_Handler(){
	static uint32_t cont = 0;
	if(cont > 10 ){
		cont = 0;
		if(GPIOs_getPIN(LEDXPRESSO)){
			GPIOs_SetPIN(LEDXPRESSO,0);
		} else {
			GPIOs_SetPIN(LEDXPRESSO,1);
		}
	}
	cont++;
}
