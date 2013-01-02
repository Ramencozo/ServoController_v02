//*****************************************************************************
//*****************************************************************************
//  FILENAME: PWM8_10.h
//   Version: 2.60, Updated on 2012/3/2 at 9:15:10
//  Generated by PSoC Designer 5.2.2551
//
//  DESCRIPTION: PWM8 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2012. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef PWM8_10_INCLUDE
#define PWM8_10_INCLUDE

#include <m8c.h>

#pragma fastcall16 PWM8_10_EnableInt
#pragma fastcall16 PWM8_10_DisableInt
#pragma fastcall16 PWM8_10_Start
#pragma fastcall16 PWM8_10_Stop
#pragma fastcall16 PWM8_10_bReadCounter              // Read  DR0
#pragma fastcall16 PWM8_10_WritePeriod               // Write DR1
#pragma fastcall16 PWM8_10_bReadPulseWidth           // Read  DR2
#pragma fastcall16 PWM8_10_WritePulseWidth           // Write DR2

// The following symbols are deprecated.
// They may be omitted in future releases
//
#pragma fastcall16 bPWM8_10_ReadCounter              // Read  DR0 (Deprecated)
#pragma fastcall16 bPWM8_10_ReadPulseWidth           // Read  DR2 (Deprecated)


//-------------------------------------------------
// Prototypes of the PWM8_10 API.
//-------------------------------------------------

extern void PWM8_10_EnableInt(void);                        // Proxy Class 1
extern void PWM8_10_DisableInt(void);                       // Proxy Class 1
extern void PWM8_10_Start(void);                            // Proxy Class 1
extern void PWM8_10_Stop(void);                             // Proxy Class 1
extern BYTE PWM8_10_bReadCounter(void);                     // Proxy Class 2
extern void PWM8_10_WritePeriod(BYTE bPeriod);              // Proxy Class 1
extern BYTE PWM8_10_bReadPulseWidth(void);                  // Proxy Class 1
extern void PWM8_10_WritePulseWidth(BYTE bPulseWidth);      // Proxy Class 1

// The following functions are deprecated.
// They may be omitted in future releases
//
extern BYTE bPWM8_10_ReadCounter(void);            // Deprecated
extern BYTE bPWM8_10_ReadPulseWidth(void);         // Deprecated


//--------------------------------------------------
// Constants for PWM8_10 API's.
//--------------------------------------------------

#define PWM8_10_CONTROL_REG_START_BIT          ( 0x01 )
#define PWM8_10_INT_REG_ADDR                   ( 0x0df )
#define PWM8_10_INT_MASK                       ( 0x02 )


//--------------------------------------------------
// Constants for PWM8_10 user defined values
//--------------------------------------------------

#define PWM8_10_PERIOD                         ( 0xff )
#define PWM8_10_PULSE_WIDTH                    ( 0xc0 )


//-------------------------------------------------
// Register Addresses for PWM8_10
//-------------------------------------------------

#pragma ioport  PWM8_10_COUNTER_REG:    0x044              //DR0 Count register
BYTE            PWM8_10_COUNTER_REG;
#pragma ioport  PWM8_10_PERIOD_REG: 0x045                  //DR1 Period register
BYTE            PWM8_10_PERIOD_REG;
#pragma ioport  PWM8_10_COMPARE_REG:    0x046              //DR2 Compare register
BYTE            PWM8_10_COMPARE_REG;
#pragma ioport  PWM8_10_CONTROL_REG:    0x047              //Control register
BYTE            PWM8_10_CONTROL_REG;
#pragma ioport  PWM8_10_FUNC_REG:   0x144                  //Function register
BYTE            PWM8_10_FUNC_REG;
#pragma ioport  PWM8_10_INPUT_REG:  0x145                  //Input register
BYTE            PWM8_10_INPUT_REG;
#pragma ioport  PWM8_10_OUTPUT_REG: 0x146                  //Output register
BYTE            PWM8_10_OUTPUT_REG;
#pragma ioport  PWM8_10_INT_REG:       0x0df               //Interrupt Mask Register
BYTE            PWM8_10_INT_REG;


//-------------------------------------------------
// PWM8_10 Macro 'Functions'
//-------------------------------------------------

#define PWM8_10_Start_M \
   PWM8_10_CONTROL_REG |=  PWM8_10_CONTROL_REG_START_BIT

#define PWM8_10_Stop_M  \
   PWM8_10_CONTROL_REG &= ~PWM8_10_CONTROL_REG_START_BIT

#define PWM8_10_EnableInt_M   \
   M8C_EnableIntMask(PWM8_10_INT_REG, PWM8_10_INT_MASK)

#define PWM8_10_DisableInt_M  \
   M8C_DisableIntMask(PWM8_10_INT_REG, PWM8_10_INT_MASK)

#endif
// end of file PWM8_10.h