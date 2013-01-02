ServoController_v02
===================

7ch servo motor controller (PSoC Project)

PSoC: CY8C29466-24PXI

Pin Assain:
 P1[1]: UART_RX (UART_1)
 P1[2]: UART_TX (UART_1)

 P2[0]: Servo01 (PWM16_1)
 P2[1]: Servo02 (PWM16_2)
 P2[2]: Servo03 (PWM16_3)
 P2[3]: Servo04 (PWM16_4)
 P2[4]: Servo05 (PWM16_5)
 P2[5]: Servo06 (PWM16_6)
 P2[6]: Servo07 (PWM16_7)

Controll Command Format: 
 "d [ch] [degrees]" as ASCII strings

 //UART_1: 9600bps, Data 8bit, Start/Stop 1bit, No parity, No Flow Controll

Controll Command Example: 
 d 1 180   //Turn 180 degrees to the axis of the Servo01
 d 2 90    //Turn 90 degrees to the axis of the Servo02
 d 3 200   //Turn 180 degrees to the axis of the Servo03 (Max 180 degrees defined)
 d 4 0     //Turn 0 degrees to the axis of the Servo04 (Min 0 degrees defined)
 d 5 10    //Turn 10 degrees to the axis of the Servo05
 d 6 20    //Turn 20 degrees to the axis of the Servo06
 d 7 30    //Turn 30 degrees to the axis of the Servo07
 d 8 90    //All servoes doesn't work (Max 7ch servo)

(´ω｀)ﾉ Let's make
