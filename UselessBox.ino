#include <Servo.h>

const short int spdt = 13;
Servo myservo;  // create servo object to control a servo
Servo myservo2;
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  pinMode(spdt, INPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);
  myservo.write(120); //mana cu cutia inchisa; 180 deschide cutia
  myservo2.write(180);
}

void loop() {
  int val = digitalRead(spdt);
  if(val == 1) {
    int b = random(1, 6);
  switch(b) {
    case 1: {
      behave1();
      break;
    }
    case 2: {
      behave2();
      break;
    }
    case 3: {
      behave3();
      break;
    }
     case 4: {
      behave4();
      break;
    }
     case 5: {
      behave5();
      break;
    }
  }
  }

  myservo.write(120);

 
}

void behave1() {
  myservo.write(180);
  delay(500);
  myservo2.write(7);
  delay(500);
  myservo2.write(180);
  delay(500);
  myservo.write(120);
}

void behave2() {
  myservo.write(180);
  delay(2000);
  for(int i = 180; i > 90; i -= 1) {
    myservo2.write(i);
    delay(50);
  }
  myservo2.write(7);
  delay(500);
  myservo2.write(180);
  delay(500);
  myservo.write(120);
}

void behave3() {
  myservo.write(180);
  delay(4000);
  myservo.write(120);
  delay(5000);
  for(int i = 120 ; i <= 180; i++) {
    myservo.write(i);
    delay(30); 
  }
  delay(300);
  myservo2.write(7);
  delay(500);
  myservo2.write(180);
  delay(400);
  myservo.write(120);
}

void behave4() {
  myservo.write(180);
  delay(300);
  myservo2.write(15);
  delay(500);
  myservo2.write(180);
  delay(500);
  myservo.write(120);
  delay(4000);
  myservo.write(180);
  delay(3000);
  myservo2.write(7);
  delay(500);
  myservo2.write(180);
  delay(500);
  myservo.write(120);
}

void behave5() {
  myservo.write(180);
  delay(1000);
  myservo2.write(90);
  delay(400);
  for(int k = 0; k < 3; k++) {
    for(int i = 90; i >= 20; i--) {
      myservo2.write(i);
      delay(5);
    }
    for(int i = 20; i <= 90; i++) {
      myservo2.write(i);
      delay(5);
    }
    delay(50);
  }
  delay(300);
  myservo2.write(7);
  delay(700);
  myservo2.write(180);
  delay(500);
  myservo.write(120);
}




















