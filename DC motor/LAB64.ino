/*Lab6.4*/
//https://app.cirkitdesigner.com/project/79d56a5c-e0ba-4a2b-83ea-07d17c4686cb

#define motorL1_Pin 6
#define motorL2_Pin 7
#define EN_A_Pin   9

#define motorR1_Pin 2
#define motorR2_Pin 3
#define EN_B_Pin   5


void setup() {
  pinMode(motorL1_Pin, OUTPUT);
  pinMode(motorL2_Pin, OUTPUT);
  pinMode(EN_A_Pin, OUTPUT);

  pinMode(motorR1_Pin, OUTPUT);
  pinMode(motorR2_Pin, OUTPUT);
  pinMode(EN_B_Pin, OUTPUT);

  
  digitalWrite(motorL1_Pin, LOW);
  digitalWrite(motorL2_Pin, LOW);
  digitalWrite(motorR1_Pin, LOW);
  digitalWrite(motorR2_Pin, LOW);
  analogWrite(EN_A_Pin, 0);
  analogWrite(EN_B_Pin, 0);
}

void loop() {
  //turn off

  //  เดินห้า F
  // L 100%  R100%
  digitalWrite(motorL1_Pin, LOW);
  digitalWrite(motorL2_Pin, HIGH);
  digitalWrite(motorR1_Pin, LOW);
  digitalWrite(motorR2_Pin, HIGH);
  analogWrite(EN_A_Pin, 200); 
  analogWrite(EN_B_Pin, 200); 
  delay(2000);

  //  ถอยหลัง R
  // L 100%  R100%
  digitalWrite(motorL1_Pin, HIGH);
  digitalWrite(motorL2_Pin, LOW);
  digitalWrite(motorR1_Pin, HIGH);
  digitalWrite(motorR2_Pin, LOW);
  analogWrite(EN_A_Pin, 200);
  analogWrite(EN_B_Pin, 200);
  delay(2000);

  // เลี้ยวซ้าย L
  // L 50%  R100%
  digitalWrite(motorL1_Pin, LOW);
  digitalWrite(motorL2_Pin, HIGH);
  digitalWrite(motorR1_Pin, LOW);
  digitalWrite(motorR2_Pin, HIGH);
  analogWrite(EN_A_Pin, 100); 
  analogWrite(EN_B_Pin, 200); 
  delay(1500);

 // เลี้ยวขวา R
 // L 100%  R50%
 digitalWrite(motorL1_Pin, LOW);
  digitalWrite(motorL2_Pin, HIGH);
  digitalWrite(motorR1_Pin, LOW);
  digitalWrite(motorR2_Pin, HIGH);
  analogWrite(EN_A_Pin, 200); 
  analogWrite(EN_B_Pin, 100); 
  delay(1500);
  
 // หยุด R

 // L 100%  R50%
 digitalWrite(motorL1_Pin, LOW);
  digitalWrite(motorL2_Pin, LOW);
  digitalWrite(motorR1_Pin, LOW);
  digitalWrite(motorR2_Pin, LOW);
  analogWrite(EN_A_Pin, 0);
  analogWrite(EN_B_Pin, 0);
  delay(1000);
  }
