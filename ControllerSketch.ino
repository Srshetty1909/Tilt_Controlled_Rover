#include <Wire.h>
#include <MPU6050.h>

int mot1 = 6;
int mot2 = 7;
int mot3 = 8;
int mot4 = 9;
char drive;

MPU6050 mpu;

void setup() 
{
  pinMode(mot1, OUTPUT);
  pinMode(mot2, OUTPUT);
  pinMode(mot3, OUTPUT);
  pinMode(mot4, OUTPUT);
  Serial.begin(115200);

  while(!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G))
  {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  digitalWrite(13, LOW);

  delay(500);
  
}

void loop()
{
   while(!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G))
  {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  // Read normalized values 
  Vector normAccel = mpu.readNormalizeAccel();
  // Calculate Pitch & Roll
  int pitch = -(atan2(normAccel.XAxis, sqrt(normAccel.YAxis*normAccel.YAxis + normAccel.ZAxis*normAccel.ZAxis))*180.0)/M_PI;
  int roll = (atan2(normAccel.YAxis, normAccel.ZAxis)*180.0)/M_PI;
  //Selecting drive mode based on Pitch and roll
  if (roll > 15)
  {
    drive = 'f';
  }
  else if (roll < -15)
  {
    drive = 'b';
  }
  else if (pitch <- 15)
  {
    drive = 'r';
  }
  else if (pitch > 15)
  {
    drive = 'l';
  }
  else
  {
    drive = 's';
  }
  //Controlling motors based on drive mode
  switch(drive)
  {
    case 'f': digitalWrite(mot1, HIGH);
              digitalWrite(mot2, LOW);
              digitalWrite(mot3, HIGH);
              digitalWrite(mot4, LOW);
              break;
    case 'b': digitalWrite(mot1, LOW);
              digitalWrite(mot2, HIGH);
              digitalWrite(mot3, LOW);
              digitalWrite(mot4, HIGH);
              break;
    case 'r': digitalWrite(mot1, HIGH);
              digitalWrite(mot2, LOW);
              digitalWrite(mot3, LOW);
              digitalWrite(mot4, HIGH);
              break;
    case 'l': digitalWrite(mot1, LOW);
              digitalWrite(mot2, HIGH);
              digitalWrite(mot3, HIGH);
              digitalWrite(mot4, LOW);
              break;
    case 's': digitalWrite(mot1, LOW);
              digitalWrite(mot2, LOW);
              digitalWrite(mot3, LOW);
              digitalWrite(mot4, LOW);
              break;
  }
  delay(10);
}
