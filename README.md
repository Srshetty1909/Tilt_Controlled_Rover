Aim: To build a rover whose direction of motion is determined by the pitch and roll of its remote controller.

Operation video:


https://github.com/user-attachments/assets/a9b6130f-4b24-447a-81d1-e0063a38e49c



Working Principle:
  1. An IMU reads the orientation (pitch and roll) of the controller.
  2. The orientation is used to determine the control signals for the motors of the UGV by the controller to achieve the desired movement.
  3. The control signals are encoded and transmitted to the UGV via radio signals.
  4. The receiver circuit on the UGV decodes the control signals and passes them to the Motor Driver Circuit to generate the desired movement.

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



