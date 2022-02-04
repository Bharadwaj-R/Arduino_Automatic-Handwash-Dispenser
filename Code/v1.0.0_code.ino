#include<Servo.h>

const int SPpin = 4;    //Speaker Pin
const int TRGpin = 2;   //Trigger Pin of Ultrasonic Sensor
const int ECHOpin = 3;  //Echo Pin of Ultrasonic Sensor

Servo Pump;

void setup()
{
  Pump.attach(A0);
  Pump.write(0);

  pinMode(TRGpin, OUTPUT);
  pinMode(ECHOpin, INPUT);
  pinMode(SPpin, OUTPUT);
  
  Serial.begin(9600);
  delay(2000);
}

long findDistance()
{
  long time = 0, distance = 0;

  digitalWrite(TRGpin, LOW);
  delayMicroseconds(5);

  digitalWrite(TRGpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRGpin, LOW);

  time = pulseIn(ECHOpin, HIGH);    //Time in microseconds
  distance = (0.0343*time)/2;       //0.0343 - speed of sound in cm/us

  return distance;
}

void pumpAction()
{
  Pump.write(90);
  delay(500);
  Pump.write(0);
}

void loop()
{
  long distance = findDistance();   //Distance in cm
  Serial.println(distance);

  if(distance < 50)
  {
    pumpAction();
    
    digitalWrite(SPpin, HIGH);
    tone(SPpin, 523, 500);

    delay(2000);
  }
  else
  {
    digitalWrite(SPpin, LOW);
    noTone(SPpin);
  }
  delay(100);
}
