//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules

#define SERVO_CH1 1
#define SERVO_CH2 2
#define SERVO_CH3 3
#define SERVO_CH4 4
#define SERVO_CH5 5
#define SERVO_CH6 6
#define SERVO_CH7 7

#define MAX_WIDTH 2500
#define NEUTRAL_WIDTH 1500 
#define MIN_WIDTH 500

#define WIDTH_TICS 11

void init(void);
void wait(unsigned int times);
unsigned int convertAngleToWidth(unsigned char angle);
void driveServo(unsigned char ch, unsigned int width);

void main(void){
	char *cmd;
	char *param;
	unsigned char servoId;
	unsigned int width;
	unsigned int i,j;
	
	init();

	UART_1_CPutString("Boot.");
	UART_1_PutCRLF();
	
	while(1){
		if(UART_1_bCmdCheck()){
			if(cmd = UART_1_szGetParam()){
				switch(*cmd){
					case 'd':
					case 'D':
						if(param = UART_1_szGetParam()){
							servoId = atoi(param);
							if(param = UART_1_szGetParam()){
								width = convertAngleToWidth(atoi(param));
								
								driveServo(servoId, width);
								UART_1_CPutString("ServoId: ");
								UART_1_PutSHexInt(servoId);
								UART_1_CPutString(", Width: ");
								UART_1_PutSHexInt(width);
								UART_1_PutCRLF();
							}
						}
						break;
				}
			}
			UART_1_CmdReset();
		}
	}
}

void init(void){
	PWM16_1_DisableInt();
	PWM16_1_Start();

	PWM16_2_DisableInt();
	PWM16_2_Start();

	PWM16_3_DisableInt();
	PWM16_3_Start();

	PWM16_4_DisableInt();
	PWM16_4_Start();

	PWM16_5_DisableInt();
	PWM16_5_Start();

	PWM16_6_DisableInt();
	PWM16_6_Start();

	PWM16_7_DisableInt();
	PWM16_7_Start();

	UART_1_CmdReset();
	UART_1_IntCntl(UART_1_ENABLE_RX_INT);
	UART_1_Start(UART_1_PARITY_NONE);
	
	M8C_EnableGInt;
}

void wait(unsigned int times){
	unsigned int loop;
	for(loop=0; loop<times; loop++);
}

unsigned int convertAngleToWidth(unsigned char angle){
	unsigned int width = NEUTRAL_WIDTH;

	if(angle > 180){
		angle = 180;
	}else if(angle < 0){
		angle = 0;
	}
	
	width = MIN_WIDTH + WIDTH_TICS * angle;
	
	if(width > MAX_WIDTH){
		width = MAX_WIDTH;
	}
	
	return width;
}

void driveServo(unsigned char ch, unsigned int width){
	switch(ch){
		case SERVO_CH1:
			PWM16_1_WritePulseWidth(width);
			break;
		case SERVO_CH2:
			PWM16_2_WritePulseWidth(width);
			break;
		case SERVO_CH3:
			PWM16_3_WritePulseWidth(width);
			break;
		case SERVO_CH4:
			PWM16_4_WritePulseWidth(width);
			break;
		case SERVO_CH5:
			PWM16_5_WritePulseWidth(width);
			break;
		case SERVO_CH6:
			PWM16_6_WritePulseWidth(width);
			break;
		case SERVO_CH7:
			PWM16_7_WritePulseWidth(width);
			break;
	}
}
