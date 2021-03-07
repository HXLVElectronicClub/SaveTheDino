#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(9);
}

void loop() {
    int val = analogRead(A0);
     Serial.println(val);

    if (val <  600) {
      Serial.println("cactus detected!");
      delay(150); 
      press_space_bar();
//      //delay(50);
    }
    
}

void press_space_bar() {
  servo.write(30);
  delay(500);
  servo.write(0);
}
