/*Lab6.2*/
//https://app.cirkitdesigner.com/project/d2cdc435-31ed-43fa-a3f4-a8bb0f53313b

#define motorR1_Pin 2
#define motorR2_Pin 3
#define EN_B_Pin 4

void setup() {
  Serial.begin(9600);
  pinMode(motorR1_Pin,OUTPUT);
  pinMode(motorR2_Pin,OUTPUT);
  pinMode(EN_B_Pin ,OUTPUT);

  digitalWrite(motorR1_Pin,0); 
  digitalWrite(motorR2_Pin,0);

}

void loop() {
   digitalWrite(EN_B_Pin,1);
   
   //motor R  ,  turn
  /*  IN3   /*IN4
       1       0*/
  
  digitalWrite(motorR1_Pin,1); //iN4 to 0
  digitalWrite(motorR2_Pin,0); //iN3 to 1
  delay(200);


 //motor R  ,  turn
  /*  IN3   /*IN4
       1       0*/
  digitalWrite(motorR1_Pin,0); //iN4 to 0
  digitalWrite(motorR2_Pin,1); //iN3 to 1
  delay(2000);

}
