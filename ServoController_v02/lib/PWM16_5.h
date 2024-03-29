//*****************************************************************************
//*****************************************************************************
//  FILENAME: PWM16_5.h
//   Version: 2.5, Updated on 2012/3/2 at 9:15:9
//  Generated by PSoC Designer 5.2.2551
//
//  DESCRIPTION: PWM16 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2012. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef PWM16_5_INCLUDE
#define PWM16_5_INCLUDE

#include <m8c.h>

#pragma fastcall16 PWM16_5_EnableInt
#pragma fastcall16 PWM16_5_DisableInt
#pragma fastcall16 PWM16_5_Start
#pragma fastcall16 PWM16_5_Stop
#pragma fastcall16 PWM16_5_wReadCounter              // Read  DR0
#pragma fastcall16 PWM16_5_WritePeriod               // Write DR1
#pragma fastcall16 PWM16_5_wReadPulseWidth           // Read  DR2
#pragma fastcall16 PWM16_5_WritePulseWidth           // Write DR2

// The following symbols are deprecated.
// They may be omitted in future releases
//
#pragma fastcall16 wPWM16_5_ReadCounter              // Read  DR0 (Deprecated)
#pragma fastcall16 wPWM16_5_ReadPulseWidth           // Read  DR2 (Deprecated)


//-------------------------------------------------
// Prototypes of the PWM16_5 API.
//-------------------------------------------------

extern void PWM16_5_EnableInt(void);                  // Proxy Class 1
extern void PWM16_5_DisableInt(void);                 // Proxy Class 1
extern void PWM16_5_Start(void);                      // Proxy Class 1
extern void PWM16_5_Stop(void);                       // Proxy Class 1
extern WORD PWM16_5_wReadCounter(void);               // Proxy Class 2
extern void PWM16_5_WritePeriod(WORD wPeriod);        // Proxy Class 1
extern WORD PWM16_5_wReadPulseWidth(void);            // Proxy Class 1
extern void PWM16_5_WritePulseWidth(WORD wPulseWidth);// Proxy Class 1

// The following functions are deprecated.
// They may be omitted in future releases
//
extern WORD wPWM16_5_ReadCounter(void);            // Deprecated
extern WORD wPWM16_5_ReadPulseWidth(void);         // Deprecated


//-------------------------------------------------
// Constants for PWM16_5 API's.
//-------------------------------------------------

#define PWM16_5_CONTROL_REG_START_BIT          ( 0x01 )
#define PWM16_5_INT_REG_ADDR                   ( 0x0df )
#define PWM16_5_INT_MASK                       ( 0x20 )


//--------------------------------------------------
// Constants for PWM16_5 user defined values
//--------------------------------------------------

#define PWM16_5_PERIOD                         ( 0x4e20 )
#define PWM16_5_PULSE_WIDTH                    ( 0x5dc )


//-------------------------------------------------
// Register Addresses for PWM16_5
//-------------------------------------------------

#pragma ioport  PWM16_5_COUNTER_LSB_REG:    0x050          //DR0 Count register LSB
BYTE            PWM16_5_COUNTER_LSB_REG;
#pragma ioport  PWM16_5_COUNTER_MSB_REG:    0x054          //DR0 Count register MSB
BYTE            PWM16_5_COUNTER_MSB_REG;
#pragma ioport  PWM16_5_PERIOD_LSB_REG: 0x051              //DR1 Period register LSB
BYTE            PWM16_5_PERIOD_LSB_REG;
#pragma ioport  PWM16_5_PERIOD_MSB_REG: 0x055              //DR1 Period register MSB
BYTE            PWM16_5_PERIOD_MSB_REG;
#pragma ioport  PWM16_5_COMPARE_LSB_REG:    0x052          //DR2 Compare register LSB
BYTE            PWM16_5_COMPARE_LSB_REG;
#pragma ioport  PWM16_5_COMPARE_MSB_REG:    0x056          //DR2 Compare register MSB
BYTE            PWM16_5_COMPARE_MSB_REG;
#pragma ioport  PWM16_5_CONTROL_LSB_REG:    0x053          //Control register LSB
BYTE            PWM16_5_CONTROL_LSB_REG;
#pragma ioport  PWM16_5_CONTROL_MSB_REG:    0x057          //Control register MSB
BYTE            PWM16_5_CONTROL_MSB_REG;
#pragma ioport  PWM16_5_FUNC_LSB_REG:   0x150              //Function register LSB
BYTE            PWM16_5_FUNC_LSB_REG;
#pragma ioport  PWM16_5_FUNC_MSB_REG:   0x154              //Function register MSB
BYTE            PWM16_5_FUNC_MSB_REG;
#pragma ioport  PWM16_5_INPUT_LSB_REG:  0x151              //Input register LSB
BYTE            PWM16_5_INPUT_LSB_REG;
#pragma ioport  PWM16_5_INPUT_MSB_REG:  0x155              //Input register MSB
BYTE            PWM16_5_INPUT_MSB_REG;
#pragma ioport  PWM16_5_OUTPUT_LSB_REG: 0x152              //Output register LSB
BYTE            PWM16_5_OUTPUT_LSB_REG;
#pragma ioport  PWM16_5_OUTPUT_MSB_REG: 0x156              //Output register MSB
BYTE            PWM16_5_OUTPUT_MSB_REG;
#pragma ioport  PWM16_5_INT_REG:       0x0df               //Interrupt Mask Register
BYTE            PWM16_5_INT_REG;


//-------------------------------------------------
// PWM16_5 Macro 'Functions'
//-------------------------------------------------

#define PWM16_5_Start_M \
   ( PWM16_5_CONTROL_LSB_REG |=  PWM16_5_CONTROL_REG_START_BIT )

#define PWM16_5_Stop_M  \
   ( PWM16_5_CONTROL_LSB_REG &= ~PWM16_5_CONTROL_REG_START_BIT )

#define PWM16_5_EnableInt_M   \
   M8C_EnableIntMask(  PWM16_5_INT_REG, PWM16_5_INT_MASK )

#define PWM16_5_DisableInt_M  \
   M8C_DisableIntMask( PWM16_5_INT_REG, PWM16_5_INT_MASK )

#endif
// end of file PWM16_5.h
