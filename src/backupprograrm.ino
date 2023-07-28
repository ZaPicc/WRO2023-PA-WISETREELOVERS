#include <Servo.h>
// Motor A connections
const int enA = 3;
const int in1 = 11;
const int in2 = 10;

const int servoPin = 9;
Servo turnServo;

const int buttonPin = 7;
int contact = 0;

const int pingPin = 5; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor 
int laps = 0;

bool clockwise = false;

void setup() {
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(buttonPin, INPUT);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  turnServo.attach(servoPin);
  turnServo.write(130);

}

void loop() {
   contact = digitalRead(buttonPin);
   if (contact == HIGH) { // Check if the button is pressed
    clockwise == true;  // Set the flag to start the loop
   }
   if(laps < 12){
   if(clockwise = true){
   analogWrite(enA, 255);
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   cm = microsecondsToCentimeters(duration);
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
   if(cm <= 75){
   turnServo.write(100);
   delay(2000);
   turnServo.write(128);
   laps++;
   }
   }
   else{
   analogWrite(enA, 255);
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   cm = microsecondsToCentimeters(duration);
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
   if(cm <= 70){
   turnServo.write(152);
   delay(2100);
   turnServo.write(128);
   laps++;
   }
   }
   }
   else if(laps == 12){
   digitalWrite(in1, LOW);
   digitalWrite(in2, LOW); 
   analogWrite(enA, 0);
   }
}


long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
