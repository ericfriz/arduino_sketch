//how to use array variable

int pin[3] = {11, 12, 13};
int delayTime = 1000; // msec
int index = 0;
void setup() {
   Serial.begin(9600); 
   for (int i=0;i<3; i++) {
      pinMode(pin[i],OUTPUT);
      digitalWrite(pin[i], LOW);
   }
}

void loop() {
   log(index);
   delay(delayTime);
   digitalWrite(pin[index], !digitalRead(pin[index]));
   index = (++index)%3;
}

void log(int step){
  Serial.println("Status " + String(step) + " LED: " + 
                  String(digitalRead(pin[0])) + " " + 
                  String(digitalRead(pin[1])) + " " + 
                  String(digitalRead(pin[2]))); 
  }
