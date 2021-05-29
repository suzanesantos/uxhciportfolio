#include <Servo.h>
Servo myServo; // Declare a servo object for us to control
int servoPin = 9; // Var for the pin the servo connects to
int pos = 80; // Var to keep track of the servo's position
void setup() {
 myServo.attach(servoPin); // Tell the servo to what pin it's connected to
}
void loop() {
  
 for(pos = 80; pos <= 90; pos += 10){ // Loop, pos is added to (from 80 to 90)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); // 
 }
 for(pos = 90; pos <= 100; pos += 10){ // Loop, pos is added to (90 0 to 100)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
 for(pos = 100; pos <= 110; pos += 10){ // Loop, pos is added to (from 100 to 110)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
 for(pos = 110; pos <= 120; pos += 10){ // Loop, pos is added to (from 110 to 120)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200);  
 }
  for(pos = 120; pos <= 130; pos += 10){ // Loop, pos is added to (from 120 to 130)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
  for(pos = 130; pos >= 140; pos -= 10){ // Loop, pos is added to (from 140 to 130)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
  for(pos = 120; pos <= 130; pos += 10){ // Loop, pos is added to (from 120 to 130)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
 for(pos = 130; pos <= 140; pos += 10){ // Loop, pos is added to (from 0 to 160)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
 for(pos = 140; pos >= 130; pos -= 10){ // Loop, pos is added to (from 140 to 130)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
  for(pos = 130; pos <= 140; pos += 10){ // Loop, pos is added to (from 130 to 140)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
 for(pos = 140; pos >= 80; pos -= 10){ // Loop, pos is added to (from 140 to 80)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
 
 for(pos = 80; pos >= 70; pos -= 10){ // Loop, pos is added to (from 80 to 70)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
  for(pos = 70; pos >= 60; pos -= 10){ // Loop, pos is added to (from 70 to 60)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }
  for(pos = 60; pos >= 50; pos -= 10){ // Loop, pos is added to (from 60 to 50)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 50; pos >= 40; pos -= 10){ // Loop, pos is added to (from 50 to 40)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 40; pos >= 30; pos -= 10){ // Loop, pos is added to (from 40 to 30)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 30; pos >= 20; pos -= 10){ // Loop, pos is added to (from 30 to 20)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 20; pos >= 10; pos -= 10){ // Loop, pos is added to (from 20 to 10)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 10; pos >= 0; pos -= 10){ // Loop, pos is added to (from 10 to 0)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 0; pos <= 10; pos += 10){ // Loop, pos is added to (from 0 to 160)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 10; pos >= 0; pos -= 10){ // Loop, pos is added to (from 10 to 0)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 0; pos <= 20; pos += 10){ // Loop, pos is added to (from 0 to 20)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 10; pos >= 0; pos -= 10){ // Loop, pos is added to (from 10 to 0)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
}
for(pos = 0; pos <= 80; pos += 10){ // Loop, pos is added to (from 0 to 80)
 myServo.write(pos); // Turn the servo to the position in pos
 delay(200); 
 }

}
