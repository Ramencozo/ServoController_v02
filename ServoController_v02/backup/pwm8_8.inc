;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: PWM8_8.inc
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
; Constants for PWM8_8 API's.
;--------------------------------------------------

PWM8_8_CONTROL_REG_START_BIT:              equ 0x01    ; Control register start bit
PWM8_8_INT_REG:                            equ 0x0e1
PWM8_8_INT_MASK:                           equ 0x80


;--------------------------------------------------
; Constants for PWM8_8 user defined values
;--------------------------------------------------

PWM8_8_PERIOD:                             equ 0xff
PWM8_8_PULSE_WIDTH:                        equ 0xc0


;--------------------------------------------------
; Register Address Constants for PWM8_8
;--------------------------------------------------

PWM8_8_COUNTER_REG:                    equ 0x3c   ; DR0 Count register
PWM8_8_PERIOD_REG:                     equ 0x3d   ; DR1 Period register
PWM8_8_COMPARE_REG:                    equ 0x3e   ; DR2 Compare register
PWM8_8_CONTROL_REG:                    equ 0x3f   ; Control register
PWM8_8_FUNC_REG:                       equ 0x3c   ; Function register
PWM8_8_INPUT_REG:                      equ 0x3d   ; Input register
PWM8_8_OUTPUT_REG:                     equ 0x3e   ; Output register


;--------------------------------------------------
; PWM8_8 Macro 'Functions'
;--------------------------------------------------

   macro PWM8_8_Start_M
   or    reg[PWM8_8_CONTROL_REG],  PWM8_8_CONTROL_REG_START_BIT
   endm

   macro PWM8_8_Stop_M
   and   reg[PWM8_8_CONTROL_REG], ~PWM8_8_CONTROL_REG_START_BIT
   endm

   macro PWM8_8_EnableInt_M
   M8C_EnableIntMask PWM8_8_INT_REG, PWM8_8_INT_MASK
   endm

   macro PWM8_8_DisableInt_M
   M8C_DisableIntMask PWM8_8_INT_REG, PWM8_8_INT_MASK
   endm


; end of file PWM8_8.inc
