#include <Servo.h>

const short int spdt = 13; //spdt switch is connected to pin 13
Servo myservo; //servo used to open the lid
Servo myservo2; //servo used to action the spdt switch


void setup() {
  pinMode(spdt, INPUT);
  myservo.attach(9);  
  myservo2.attach(10);
  myservo.write(120); 
  myservo2.write(180);
}

void loop() {
  int val = digitalRead(spdt); //reading the state of the spdt switch
  if(val == 1) {
  int b = random(1, 6); //variable used to get a random behaviour
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

//behaviours
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
