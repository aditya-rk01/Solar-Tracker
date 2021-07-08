# Solar-Tracker
Copyright (C) 2020 by Aditya R, Institute of Technology, Nirma University.

Study of solar tracker and its implementation on small scale

Principle:

Due to the continuous revolution of earth the sun does not face towards the solar panel always. As we have to maximize the use of the resources, the energy panel should face the sun at least, till it is present in the daytime.

Components required:

      •	12V motor
      •	LN293D motor driver
      •	Arduino UNO
      •	LDR
      •	100K resistors
      •	Breadboard
      •	Jumper wires

![image](https://user-images.githubusercontent.com/68019168/124968171-ecc92280-e042-11eb-90ab-3282999df354.png)

![image](https://user-images.githubusercontent.com/68019168/124968180-f05ca980-e042-11eb-98f3-2d1e437fb2d6.png)

![image](https://user-images.githubusercontent.com/68019168/124968203-f5b9f400-e042-11eb-8bcf-3737d1b52f86.png)

Working:

      •	This project uses 2 LDRs and 1 motor to create a single axis solar tracker. For dual axis solar tracker 4 LDRs and 2 motors have to be used
      •	The LDR sends value to the Arduino and depending upon the values and already set algorithm the motor rotates in the required direction.
      •	Functions like analogRead and map in Arduino is used to receive values from LDR.
      •	L293D motor driver is used to rotate the motor in both directions.
