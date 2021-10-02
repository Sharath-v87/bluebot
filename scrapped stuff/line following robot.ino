//Motor A (Right)
char Incoming_value = 0;
int RM1 = 9;
int RM2 = 6;

//Motor B (Left)
int LM1 = 5;
int LM2 = 3;

//Define Run variable
boolean run;

void setup() {
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0)
  {
    Incoming_value = Serial.read();
    if(Incoming_value == '1')  
    { 
      digitalWrite(LM1, HIGH);
      digitalWrite(LM2, LOW);
      digitalWrite(RM1, HIGH);
      digitalWrite(RM2, LOW);
    } 
    else if(Incoming_value == '0')
    {
      digitalWrite(LM1, LOW);
      digitalWrite(LM2, LOW);
      digitalWrite(RM1, LOW);
      digitalWrite(RM2, LOW);
    } 
  }
}
