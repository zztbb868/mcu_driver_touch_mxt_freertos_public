#ifndef OS_GPIO_H_
#define OS_GPIO_H_

#include <fsl_gpio.h>
#include <fsl_port.h>

//CHG
#define BOARD_SW3_GPIO GPIOC
#define BOARD_SW3_PORT PORTC
#define BOARD_SW3_GPIO_PIN 12U
#define BOARD_SW3_IRQ PORTC_PORTD_IRQn
#define BOARD_SW3_IRQ_HANDLER PORTC_PORTD_IRQHandler
#define BOARD_SW3_NAME "SW3"

#define BOARD_CHG_GPIO_ID	GPIO_PORTC
#define BOARD_CHG_GPIO BOARD_SW3_GPIO
#define BOARD_CHG_PORT BOARD_SW3_PORT
#define BOARD_CHG_GPIO_PIN BOARD_SW3_GPIO_PIN
#define BOARD_CHG_IRQ BOARD_SW3_IRQ
#define BOARD_CHG_IRQ_HANDLER BOARD_SW3_IRQ_HANDLER
#define BOARD_CHG_NAME BOARD_SW3_NAME

//RST
#define BOARD_RST_GPIO_ID GPIO_PORTC
#define BOARD_RST_GPIO_PIN 13U

#endif