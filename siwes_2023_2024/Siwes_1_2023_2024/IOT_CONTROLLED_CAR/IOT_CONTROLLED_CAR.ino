#if 1
const int
  rightMotorForward = 10,
  rightMotorBackward = 11,
  leftMotorForward = 13,
  leftMotorBackward = 12;

//Add software serial library so that you can add custom UART, tx, rx
#include <SoftwareSerial.h>
const int btTx = 2, btRx = 3;

SoftwareSerial btModule(btTx, btRx);

void setPinMode() {
  //tell arduino that these pins are OUTPUT
  pinMode(rightMotorForward, OUTPUT);
  pinMode(rightMotorBackward, OUTPUT);
  pinMode(leftMotorForward, OUTPUT);
  pinMode(leftMotorBackward, OUTPUT);
}

void goForward() {  //motor right and left
  //right wheel, go forward
  digitalWrite(rightMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0

  //left wheel, go forward
  digitalWrite(leftMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(leftMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
}

void goBackward() {  //motor right and left
  //right wheel, go BACKWARD
  digitalWrite(rightMotorForward, LOW);
  digitalWrite(rightMotorBackward, HIGH);

  //left wheel, go BACKWARD
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(leftMotorBackward, HIGH);
}

void goLeft() {  //RIGHT == FORWARD, LEFT Stop
  //right wheel, go forward
  digitalWrite(rightMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0

  //left wheel, stay still
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(leftMotorBackward, LOW);
}

void goRight() {  //RIGHT == stop, LEFT = forward
  //right wheel, go forward
  digitalWrite(rightMotorForward, LOW);   //GIVE THIS PIN +5V
  digitalWrite(rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0

  //left wheel, stay still
  digitalWrite(leftMotorForward, HIGH);
  digitalWrite(leftMotorBackward, LOW);
}

void stopMoving() {  //RIGHT == stop, LEFT = forward
  //right wheel, go forward
  digitalWrite(rightMotorForward, LOW);   //GIVE THIS PIN +5V
  digitalWrite(rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0

  //left wheel, stay still
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(leftMotorBackward, LOW);
}



void setup() {
  // INSTructions to execute once
  setPinMode();
  btModule.begin(9600);//communication speed between arduino and btModule
  // btModule.begin(9600);//communication speed between arduino and btModule
}

char remoteValue = 
void loop() {
  if(btModule.available() != 0) {
    
  }
  
}
#endif