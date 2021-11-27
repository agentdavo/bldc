/*

*/

#ifndef HW_PAC5532EVK1_H_
#define HW_PAC5532EVK1_H_

#define HW_NAME					"PAC5532EVK1"

// HW properties
#define HW_HAS_DRV_PAC55XX
#define HW_HAS_3_SHUNTS
#define HW_HAS_PHASE_SHUNTS
#define HW_HAS_SIN_COS_ENCODER
#define HW_HAS_GATE_DRIVER_SUPPLY_MONITOR
#define LED_GREEN_ON()			
#define LED_GREEN_OFF()			
#define LED_RED_ON()			
#define LED_RED_OFF()			

//==========================================================================
//
// PAC5532EVK1 Board Information
//
//==========================================================================

// Gate Driver - Pin Mapping
// Driver Phase U = DRL0/DRH3
// Driver Phase V = DRL1/DRH4
// Driver Phase W = DRL2/DRH5

// Phase Current - Port Mapping
// Phase Current U = AIO10
// Phase Current V = AIO32
// Phase Current W = AIO54

// Bus Voltage - Port Mapping
// Vbus = PF6

// Phase Voltage - Port Mapping
// Phase Voltage U = AIO7
// Phase Voltage V = AIO8
// Phase Voltage W = AIO9

// AIO Resource Assignment
// AIO10 = ADC sampling, OC & CBC protection (Iu)
// AIO32 = ADC sampling, OC & CBC protection (Iv)
// AIO54 = ADC sampling, OC & CBC protection (Iw)
// AIO6 = Input (Not Used)
// AIO7 = ADC sampling (Vu)
// AIO8 = ADC sampling (Vv)
// AIO9 = ADC sampling (Vw)

// Sequencer Entry Assignments
// Vbus                  : N0
// Motor Phase Current U : N2
// Motor Phase Current V : N4
// Motor Phase Current W : N6
// Motor Phase Voltage U : N2
// Motor Phase Voltage V : N4
// Motor Phase Voltage W : N6

// Special Function - Port Mapping
// Debug IO1 = PE0
// Debug IO2 = PE1
// PPM Port = NONE
// Debug DAC1 = PD0
// Debug DAC2 = PD1
// Debug DAC3 = PD2
// Debug DAS = PF4

/*
 * ADC Vector
 *
 * 0  (1):	IN0		SENS1
 * 1  (2):	IN1		SENS2
 * 2  (3):	IN2		SENS3
 * 3  (1):	IN10	CURR1
 * 4  (2):	IN11	CURR2
 * 5  (3):	IN12	CURR3
 * 6  (1):	IN5		ADC_EXT1
 * 7  (2):	IN6		ADC_EXT2
 * 8  (3):	IN3		TEMP_MOS
 * 9  (1):	IN14	TEMP_MOTOR
 * 10 (2):	IN15	ADC_EXT3
 * 11 (3):	IN13	AN_IN
 * 12 (1):	Vrefint
 * 13 (2):	IN0		SENS1
 * 14 (3):	IN1		SENS2
 * 15 (1):  IN8		TEMP_MOS_2
 * 16 (2):  IN9		TEMP_MOS_3
 * 17 (3):  IN3		SENS3
 */
 
#define HW_ADC_CHANNELS			12
#define HW_ADC_INJ_CHANNELS		2
#define HW_ADC_NBR_CONV			4

// ADC Indexes
#define ADC_IND_SENS1			2
#define ADC_IND_SENS2			1
#define ADC_IND_SENS3			0
#define ADC_IND_CURR1			4
#define ADC_IND_CURR2			3
#define ADC_IND_VIN_SENS		8
#define ADC_IND_EXT				10
#define ADC_IND_TEMP_MOS		9
#define ADC_IND_TEMP_MOTOR		11
#define ADC_IND_VREFINT			6
 
// Component parameters (can be overridden)
#ifndef V_REG
#define V_REG							
#endif
#ifndef VIN_R1
#define VIN_R1							
#endif
#ifndef VIN_R2
#define VIN_R2							
#endif
#ifndef CURRENT_AMP_GAIN
#define CURRENT_AMP_GAIN
#endif
#ifndef CURRENT_SHUNT_RES
#define CURRENT_SHUNT_RES				
#endif

// Input voltage
#define GET_INPUT_VOLTAGE()

//Input current
#define GET_INPUT_CURRENT()				hw_pac55xx_read_input_current()
#define GET_INPUT_CURRENT_OFFSET()		hw_pac55xx_get_input_current_offset()
#define MEASURE_INPUT_CURRENT_OFFSET()	hw_pac55xx_start_input_current_sensor_offset_measurement()

// Voltage on ADC channel
#define ADC_VOLTS(ch)

// Sin/Cos Encoder signals
#define ENCODER_SIN_VOLTS				
#define ENCODER_COS_VOLTS		

// Gate driver power supply output voltage
#define GET_GATE_DRIVER_SUPPLY_VOLTAGE()   //

// NTC Termistors
#define NTC_RES()		
#define NTC_TEMP()		
#define NTC_RES_MOTOR()
#define NTC_TEMP_MOTOR()	
#define NTC_TEMP_MOS1()			
#define NTC_TEMP_MOS2()			
#define NTC_TEMP_MOS3()	

// UART Peripheral
#define HW_UART_DEV				
#define HW_UART_GPIO_AF			
#define HW_UART_TX_PORT			
#define HW_UART_TX_PIN			
#define HW_UART_RX_PORT			
#define HW_UART_RX_PIN			

// Measurement macros
#define ADC_V_L1				
#define ADC_V_L2				
#define ADC_V_L3			
#define ADC_V_ZERO				

// Hall macros
#define READ_HALL1()			
#define READ_HALL2()			
#define READ_HALL3()			

// Gate Driver Macros
#define ENABLE_GATE()			
#define DISABLE_GATE()		
#define IS_DRV_FAULT()			//(!palReadPad(GPIOB, 12))

//CAN
#define HW_CANRX_PORT			
#define HW_CANRX_PIN			
#define HW_CANTX_PORT			
#define HW_CANTX_PIN

// SPI pins
#define HW_SPI_DEV				
#define HW_SPI_GPIO_AF			
#define HW_SPI_PORT_NSS			
#define HW_SPI_PIN_NSS			
#define HW_SPI_PORT_SCK			
#define HW_SPI_PIN_SCK			
#define HW_SPI_PORT_MOSI		
#define HW_SPI_PIN_MOSI		
#define HW_SPI_PORT_MISO		
#define HW_SPI_PIN_MISO			

// Hall/encoder pins
#define HW_HALL_ENC_GPIO1		
#define HW_HALL_ENC_PIN1		
#define HW_HALL_ENC_GPIO2		
#define HW_HALL_ENC_PIN2	
#define HW_HALL_ENC_GPIO3		
#define HW_HALL_ENC_PIN3		
#define HW_ENC_TIM				
#define HW_ENC_TIM_AF			
#define HW_ENC_TIM_CLK_EN()		
#define HW_ENC_EXTI_PORTSRC		
#define HW_ENC_EXTI_PINSRC		
#define HW_ENC_EXTI_CH			
#define HW_ENC_EXTI_LINE		
#define HW_ENC_EXTI_ISR_VEC		
#define HW_ENC_TIM_ISR_CH		
#define HW_ENC_TIM_ISR_VEC		

// Setting limits
#define HW_LIM_CURRENT			-100.0, 100.0
#define HW_LIM_CURRENT_IN		-100.0, 100.0
#define HW_LIM_CURRENT_ABS		0.0, 150.0
#define HW_LIM_VIN				6.0, 57.0
#define HW_LIM_ERPM				-200e3, 200e3
#define HW_LIM_DUTY_MIN			0.0, 0.1
#define HW_LIM_DUTY_MAX			0.0, 0.95
#define HW_LIM_TEMP_FET			-40.0, 110.0

// HW-specific functions
float hw_pac55xx_read_input_current(void);
void hw_pac55xx_get_input_current_offset(void);
void hw_pac55xx_start_input_current_sensor_offset_measurement(void);


#endif /* HW_PAC55XX_H_ */
