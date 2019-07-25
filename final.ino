//Motor A
const int inputPin1  = 1;    
const int inputPin2  = 2;    
int EN1 = 0;  

//Motor B
const int inputPin3  = 4;    
const int inputPin4  = 5;    
int EN2 = 3;                 

void revolve( int para, int del){
  if (para==1) {
        analogWrite(EN1, 150);//sets the motors speed
        analogWrite(EN2, 150);//sets the motors speed
        digitalWrite(inputPin1, HIGH);//right
        digitalWrite(inputPin2, LOW);//rightback
        digitalWrite(inputPin3, HIGH);//left
        digitalWrite(inputPin4, LOW);  //front
        delay(del);
  }
  else if (para==0) {
        analogWrite(EN1, 150);//sets the motors speed
        analogWrite(EN2, 150);//sets the motors speed
        digitalWrite(inputPin1, LOW);//right
        digitalWrite(inputPin2, HIGH);//rightback
        digitalWrite(inputPin3, LOW);//left
        digitalWrite(inputPin4, HIGH);  //front
        delay(del);
  }
}

void rotate( int para, int del){
  if (para==1) {
        analogWrite(EN1, 150);//sets the motors speed
        analogWrite(EN2, 150);//sets the motors speed
        digitalWrite(inputPin1, LOW);//right
        digitalWrite(inputPin2, HIGH);//rightback
        digitalWrite(inputPin3, HIGH);//left
        digitalWrite(inputPin4, LOW);  //front
        delay(del);
  }
  else if (para==0) {
        analogWrite(EN1, 150);//sets the motors speed
        analogWrite(EN2, 150);//sets the motors speed
        digitalWrite(inputPin1, HIGH);//right
        digitalWrite(inputPin2, LOW);//rightback
        digitalWrite(inputPin3, LOW);//left
        digitalWrite(inputPin4, HIGH);  //front
        delay(del);
  }
}

void setup()

{
  
    pinMode(EN1, OUTPUT);   // where the motor is connected to
    pinMode(EN2, OUTPUT);   // where the motor is connected to
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT);
}

void loop()

{   
  revolve(1, 2000);
  revolve(0, 2000);
  rotate(1, 2000);
  rotate(0, 2000);
}
