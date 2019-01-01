//how to use variables
int pin11 = 11;
int pin12 = 12;
int pin13 = 13;
int delayTime = 1000; // msec

void setup() {
   Serial.begin(9600); 
   pinMode(pin11,OUTPUT);
   pinMode(pin12,OUTPUT);
   pinMode(pin13,OUTPUT);
}

void loop() {
   digitalWrite(pin11, HIGH);
   digitalWrite(pin12, HIGH); 
   digitalWrite(pin13, HIGH);
   Serial.println("Status 1 LED: " + String(digitalRead(11)) + " " + String(digitalRead(12)) + " " + String(digitalRead(13))); 
   delay(delayTime);
   digitalWrite(pin11, LOW);
   Serial.println("Status 2 LED: " + String(digitalRead(11)) + " " + String(digitalRead(12)) + " " + String(digitalRead(13)));
   delay(delayTime);
   digitalWrite(pin12, LOW);
   Serial.println("Status 3 LED: " + String(digitalRead(11)) + " " + String(digitalRead(12)) + " " + String(digitalRead(13)));
   delay(delayTime);
   digitalWrite(pin13, LOW);
   Serial.println("Status 4 LED: " + String(digitalRead(11)) + " " + String(digitalRead(12)) + " " + String(digitalRead(13)));
   delay(delayTime);
}
