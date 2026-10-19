Aim: To build a rover whose direction of motion is determined by the pitch and roll of its remote controller.

Operation video: 
https://github.com/user-attachments/assets/c68545b1-a79a-46e6-9be0-68d39afc5282

Working Principle:
  1. An IMU reads the orientation (pitch and roll) of the controller.
  2. The orientation is used to determined the control signals of the motors of the UGV by the controller.
  3. The control signals are encoded and transmitted to the UGV via radio signals
  4. The receiver circuit on the UGV decodes the control signals and passes them to the Motor Driver Circuit to generate the desired movement

Tools and Equipment Used: 
  1. Circuit Design: Eagle EDA
  2. Micro-controller: ATmega328 (Arduino Nano)
  3. Micro-controller programming:  Arduino IDE
  4. IMU: MPU-6050
  5. Encoder-Decoder ICs: HT-12E, HT-12D
  6. RF transmitter-receiver: RF434 433MHz Wireless Transmitter Receiver Module
  7. Motor-Driver Module: L298N Motor Driver Module
  8. Battery: 9V Battery (Transmitter Circuit), 3s Li-Po Battery (UGV)
  9. Motors for the Rover: 12V Geared DC motors (200 RPM)



