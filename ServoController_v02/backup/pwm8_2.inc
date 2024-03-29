;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: PWM8_2.inc
;;   Version: 2.60, Updated on 2012/3/2 at 9:15:10
;;  Generated by PSoC Designer 5.2.2551
;;
;;  DESCRIPTION: Assembler declarations for the PWM8 user module interface
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2012. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "m8c.inc"


;--------------------------------------------------
; Constants for PWM8_2 API's.
;--------------------------------------------------

PWM8_2_CONTROL_REG_START_BIT:              equ 0x01    ; Control register start bit
PWM8_2_INT_REG:                            equ 0x0e1
PWM8_2_INT_MASK:                           equ 0x02


;--------------------------------------------------
; Constants for PWM8_2 user defined values
;--------------------------------------------------

PWM8_2_PERIOD:                             equ 0xff
PWM8_2_PULSE_WIDTH:                        equ 0xc0


;--------------------------------------------------
; Register Address Constants for PWM8_2
;--------------------------------------------------

PWM8_2_COUNTER_REG:                    equ 0x24   ; DR0 Count register
PWM8_2_PERIOD_REG:                     equ 0x25   ; DR1 Period register
PWM8_2_COMPARE_REG:                    equ 0x26   ; DR2 Compare register
PWM8_2_CONTROL_REG:                    equ 0x27   ; Control register
PWM8_2_FUNC_REG:                       equ 0x24   ; Function register
PWM8_2_INPUT_REG:                      equ 0x25   ; Input register
PWM8_2_OUTPUT_REG:                     equ 0x26   ; Output register


;--------------------------------------------------
; PWM8_2 Macro 'Functions'
;--------------------------------------------------

   macro PWM8_2_Start_M
   or    reg[PWM8_2_CONTROL_REG],  PWM8_2_CONTROL_REG_START_BIT
   endm

   macro PWM8_2_Stop_M
   and   reg[PWM8_2_CONTROL_REG], ~PWM8_2_CONTROL_REG_START_BIT
   endm

   macro PWM8_2_EnableInt_M
   M8C_EnableIntMask PWM8_2_INT_REG, PWM8_2_INT_MASK
   endm

   macro PWM8_2_DisableInt_M
   M8C_DisableIntMask PWM8_2_INT_REG, PWM8_2_INT_MASK
   endm


; end of file PWM8_2.inc
