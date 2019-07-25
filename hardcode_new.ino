//Motor A
const int inputPin1  = 1;    
const int inputPin2  = 2;    
int EN1 = 0;  

//Motor B
const int inputPin3  = 4;    
const int inputPin4  = 5;    
int EN2 = 3;                 

//Motor C
const int inputPin5  = 7;    
const int inputPin6  = 8;    
int EN3 = 6;  

//Motor D
const int inputPin7  = 10;    
const int inputPin8  = 11;    
int EN4 = 9;

//Motor E
const int inputPin9  = 13;    
const int inputPin10  = 14;    
int EN5 = 12;  

//Motor F
const int inputPin11 = 16;    
const int inputPin12 = 17;    
int EN6 = 15;


void setup()

{
  
    pinMode(EN1, OUTPUT);   // where the motor is connected to
    pinMode(EN2, OUTPUT);   // where the motor is connected to
    pinMode(EN3, OUTPUT);   // where the motor is connected to
    pinMode(EN4, OUTPUT);   // where the motor is connected to
    pinMode(EN5, OUTPUT);   // where the motor is connected to
    pinMode(EN6, OUTPUT);   // where the motor is connected to
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT);
    pinMode(inputPin5, OUTPUT);
    pinMode(inputPin6, OUTPUT);
    pinMode(inputPin7, OUTPUT);
    pinMode(inputPin8, OUTPUT);
    pinMode(inputPin9, OUTPUT);
    pinMode(inputPin10, OUTPUT);
    pinMode(inputPin11, OUTPUT);
    pinMode(inputPin12, OUTPUT);  
    Serial.begin(9600);
    Serial.println("ENTER A CHARACTER");
}

void loop()

{   
if (Serial.available() > 0) {

    int inByte = Serial.read();
  switch (inByte) {
      case 'w':
        analogWrite(EN1, 100);//sets the motors speed
        analogWrite(EN2, 100);//sets the motors speed
        digitalWrite(inputPin1, HIGH);//right
        digitalWrite(inputPin2, LOW);//rightback
        digitalWrite(inputPin3, HIGH);//left
        digitalWrite(inputPin4, LOW);  //front
        delay(2000);
        break;
      case 's':
        analogWrite(EN1, 100);//sets the motors speed
        analogWrite(EN2, 100);//sets the motors speed
        digitalWrite(inputPin1, LOW);//right
        digitalWrite(inputPin2, HIGH);//rightback
        digitalWrite(inputPin3, LOW);//left
        digitalWrite(inputPin4, HIGH);  //front
        delay(2000);
        break;
      case 'a':
        analogWrite(EN1, 100);//sets the motors speed
        analogWrite(EN2, 100);//sets the motors speed
        digitalWrite(inputPin1, LOW);//right
        digitalWrite(inputPin2, HIGH);//rightback
        digitalWrite(inputPin3, HIGH);//left
        digitalWrite(inputPin4, LOW);  //front
        delay(2000);
        break;
      case 'd':
        analogWrite(EN1, 100);//sets the motors speed
        analogWrite(EN2, 100);//sets the motors speed
        digitalWrite(inputPin1, HIGH);//right
        digitalWrite(inputPin2, LOW);//rightback
        digitalWrite(inputPin3, LOW);//left
        digitalWrite(inputPin4, HIGH);  //front
        delay(2000);
        break;
      case 'q':
        analogWrite(EN3, 100);//sets the motors speed
        analogWrite(EN4, 100);//sets the motors speed
        digitalWrite(inputPin5, HIGH);//right
        digitalWrite(inputPin6, LOW);//rightback
        digitalWrite(inputPin7, HIGH);//left
        digitalWrite(inputPin8, LOW);  //front
        delay(2000);
        break;
      case 'e':
        analogWrite(EN3, 100);//sets the motors speed
        analogWrite(EN4, 100);//sets the motors speed
        digitalWrite(inputPin5, LOW);//right
        digitalWrite(inputPin6, HIGH);//rightback
        digitalWrite(inputPin7, LOW);//left
        digitalWrite(inputPin8, HIGH);  //front
        delay(2000);
        break;
      case 'z':
        analogWrite(EN5, 100);//sets the motors speed
        analogWrite(EN6, 100);//sets the motors speed
        digitalWrite(inputPin9, HIGH);//right
        digitalWrite(inputPin10, LOW);//rightback
        digitalWrite(inputPin11, HIGH);//left
        digitalWrite(inputPin12, LOW);  //front
        delay(2000);
        break;
      case 'x':
        analogWrite(EN5, 100);//sets the motors speed
        analogWrite(EN6, 100);//sets the motors speed
        digitalWrite(inputPin9, LOW);//right
        digitalWrite(inputPin10, HIGH);//rightback
        digitalWrite(inputPin11, LOW);//left
        digitalWrite(inputPin12, HIGH);  //front
        delay(2000);
        break;
      default:
        digitalWrite(inputPin1, LOW);
        digitalWrite(inputPin2, LOW);
        digitalWrite(inputPin3, LOW);
        digitalWrite(inputPin4, LOW);
        digitalWrite(inputPin5, LOW);
        digitalWrite(inputPin6, LOW);
        digitalWrite(inputPin7, LOW);
        digitalWrite(inputPin8, LOW);
        digitalWrite(inputPin9, LOW);
        digitalWrite(inputPin10, LOW);
        digitalWrite(inputPin11, LOW);
        digitalWrite(inputPin12, LOW);
        
        }
    }    
}
