/*
 * Copyright (c) 2016-2018 Nordic Semiconductor ASA.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Push button switch 0 */
#define SW0_GPIO_PIN     13
#define SW0_GPIO_NAME    CONFIG_GPIO_NRF5_P0_DEV_NAME
#define SW0_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Push button switch 1 */
#define SW1_GPIO_PIN     14
#define SW1_GPIO_NAME    CONFIG_GPIO_NRF5_P0_DEV_NAME
#define SW1_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Push button switch 2 */
#define SW2_GPIO_PIN     15
#define SW2_GPIO_NAME    CONFIG_GPIO_NRF5_P0_DEV_NAME
#define SW2_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Push button switch 3 */
#define SW3_GPIO_PIN     16
#define SW3_GPIO_NAME    CONFIG_GPIO_NRF5_P0_DEV_NAME
#define SW3_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Onboard GREEN LED 0 */
#define LED0_GPIO_PIN  17
#define LED0_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Onboard GREEN LED 1 */
#define LED1_GPIO_PIN  18
#define LED1_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Onboard GREEN LED 2 */
#define LED2_GPIO_PIN  19
#define LED2_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Onboard GREEN LED 3 */
#define LED3_GPIO_PIN  20
#define LED3_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME

#endif /* __INC_BOARD_H */
