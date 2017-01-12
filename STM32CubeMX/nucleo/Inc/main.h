/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * Copyright (c) 2016 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define ECG_PACER_ADC_SCK_Pin GPIO_PIN_2
#define ECG_PACER_ADC_SCK_GPIO_Port GPIOE
#define PUMP_CTRL_TACHO_Pin GPIO_PIN_5
#define PUMP_CTRL_TACHO_GPIO_Port GPIOE
#define SENSORS_I2C_SDA_Pin GPIO_PIN_0
#define SENSORS_I2C_SDA_GPIO_Port GPIOF
#define SENSORS_I2C_SCL_Pin GPIO_PIN_1
#define SENSORS_I2C_SCL_GPIO_Port GPIOF
#define OLED_nCS_Pin GPIO_PIN_6
#define OLED_nCS_GPIO_Port GPIOF
#define OLED_SCK_Pin GPIO_PIN_7
#define OLED_SCK_GPIO_Port GPIOF
#define OLED_MISO_Pin GPIO_PIN_8
#define OLED_MISO_GPIO_Port GPIOF
#define OLED_MOSI_Pin GPIO_PIN_9
#define OLED_MOSI_GPIO_Port GPIOF
#define PUMP_CTRL_CURRENT_Pin GPIO_PIN_0
#define PUMP_CTRL_CURRENT_GPIO_Port GPIOC
#define VLV_CTRL_CURRENT_Pin GPIO_PIN_1
#define VLV_CTRL_CURRENT_GPIO_Port GPIOC
#define ECG_ADS1298_MISO_Pin GPIO_PIN_2
#define ECG_ADS1298_MISO_GPIO_Port GPIOC
#define POWER_VOLTAGE_Pin GPIO_PIN_3
#define POWER_VOLTAGE_GPIO_Port GPIOC
#define VLV_CTRL_LVA_IN_Pin GPIO_PIN_0
#define VLV_CTRL_LVA_IN_GPIO_Port GPIOA
#define VLV_CTRL_LVA_OUT_Pin GPIO_PIN_1
#define VLV_CTRL_LVA_OUT_GPIO_Port GPIOA
#define VLV_CTRL_LVP_IN_Pin GPIO_PIN_2
#define VLV_CTRL_LVP_IN_GPIO_Port GPIOA
#define VLV_CTRL_LVP_OUT_Pin GPIO_PIN_3
#define VLV_CTRL_LVP_OUT_GPIO_Port GPIOA
#define DEBUG_LED0_Pin GPIO_PIN_5
#define DEBUG_LED0_GPIO_Port GPIOA
#define POWER_PG_5V_Pin GPIO_PIN_4
#define POWER_PG_5V_GPIO_Port GPIOC
#define POWER_PG_3V3_Pin GPIO_PIN_5
#define POWER_PG_3V3_GPIO_Port GPIOC
#define PUMP_CTRL_SPEED_Pin GPIO_PIN_0
#define PUMP_CTRL_SPEED_GPIO_Port GPIOB
#define VLV_CTRL_RV_IN_Pin GPIO_PIN_1
#define VLV_CTRL_RV_IN_GPIO_Port GPIOB
#define ECG_PACER_ADC_nCS_Pin GPIO_PIN_12
#define ECG_PACER_ADC_nCS_GPIO_Port GPIOE
#define ECG_PACER_ADC_MISO_Pin GPIO_PIN_13
#define ECG_PACER_ADC_MISO_GPIO_Port GPIOE
#define ECCG_PACER_ADC_MOSI_Pin GPIO_PIN_14
#define ECCG_PACER_ADC_MOSI_GPIO_Port GPIOE
#define ECG_ADS1298_nCS_Pin GPIO_PIN_15
#define ECG_ADS1298_nCS_GPIO_Port GPIOE
#define ECG_ADS1298_SPI_SCK_Pin GPIO_PIN_10
#define ECG_ADS1298_SPI_SCK_GPIO_Port GPIOB
#define DEBUG_LED2_Pin GPIO_PIN_14
#define DEBUG_LED2_GPIO_Port GPIOB
#define ECG_ADS1298_MOSI_Pin GPIO_PIN_15
#define ECG_ADS1298_MOSI_GPIO_Port GPIOB
#define VLV_CTRL_OUTTAKE_OP_CL__Pin GPIO_PIN_14
#define VLV_CTRL_OUTTAKE_OP_CL__GPIO_Port GPIOD
#define VLV_CTRL_OUTTAKE_EN_Pin GPIO_PIN_15
#define VLV_CTRL_OUTTAKE_EN_GPIO_Port GPIOD
#define ECG_ADS1298_DRDY_Pin GPIO_PIN_4
#define ECG_ADS1298_DRDY_GPIO_Port GPIOG
#define VLV_CTRL_INTAKE_OP_CL__Pin GPIO_PIN_6
#define VLV_CTRL_INTAKE_OP_CL__GPIO_Port GPIOD
#define VLV_CTRL_INTAKE_EN_Pin GPIO_PIN_7
#define VLV_CTRL_INTAKE_EN_GPIO_Port GPIOD
#define nCS_SPI6_Pin GPIO_PIN_11
#define nCS_SPI6_GPIO_Port GPIOG
#define VLV_CTRL_RV_OUT_Pin GPIO_PIN_5
#define VLV_CTRL_RV_OUT_GPIO_Port GPIOB
#define DEBUG_LED1_Pin GPIO_PIN_7
#define DEBUG_LED1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
