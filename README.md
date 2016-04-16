# kafi-weight-sensor

How to use hx711 load cell amplifier with RaspberyPi? (workaround)

You need an extra arduino which gets analog inputs from amplifier and sends exact weight to rpi 2 over serial.
Arduino sketch that is used to transmit HX711 sensor data to rpi 2

Whenever it gets `G` character from serial, it sends average of 5 values obtained from weight sensor. 

Constant values are calibrated for 0 - 500g load cell: http://www.robotshop.com/en/micro-load-cell.html
