
#include <avr/io.h>
#include "FreeRTOS.h"
#include "timers.h"
#include "MCAL/gpio/gpio.h"
#define NULL ((char *)0)

void Task1_Func_timer(TimerHandle_t xtimer);


void Task2_Func_timer(TimerHandle_t xtimer);


void Task3_Func_timer(TimerHandle_t xtimer);





void Timer_RTOS_LED_Blink_AVR323(void){
	GPIO_setupPortDirection(PORTC_ID, PORT_OUTPUT);
	TimerHandle_t xTimer1 = xTimerCreate("timer1",100,pdTRUE,NULL,Task1_Func_timer);
	TimerHandle_t xTimer2 = xTimerCreate("timer2",200,pdTRUE,NULL,Task2_Func_timer);
	TimerHandle_t xTimer3 = xTimerCreate("timer3",100,pdTRUE,NULL,Task3_Func_timer);


	xTimerStart(xTimer1, 10);
	xTimerStart(xTimer2, 30);
	xTimerStart(xTimer3, 100);
	vTaskStartScheduler();
}


void Task1_Func_timer(TimerHandle_t xtimer )
{

		GPIO_TogglePin(PORTC_ID,PIN1_ID);
}

void Task2_Func_timer(TimerHandle_t xtimer)
{

		GPIO_TogglePin(PORTC_ID,PIN4_ID);
}


void Task3_Func_timer(TimerHandle_t xtimer )
{

		GPIO_TogglePin(PORTC_ID,PIN7_ID);

}


int main(void)
{

	Timer_RTOS_LED_Blink_AVR323();

	while(1)
	{

	}
}





