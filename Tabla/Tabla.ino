#define ctsPin2 2
#define ctsPin4 4
#define ctsPin6 6
#define ctsPin8 8
#define ctsPin10 10
 
int ledPin2 = 3;
int ledPin4 = 5;
int ledPin6 = 7;
int ledPin8 = 9;
int ledPin10 = 11;
 
void setup() {
  Serial.begin(9600);
  pinMode(ledPin2, OUTPUT);  
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  
  pinMode(ctsPin2, INPUT);
  pinMode(ctsPin4, INPUT);
  pinMode(ctsPin6, INPUT);
  pinMode(ctsPin8, INPUT);
  pinMode(ctsPin10, INPUT);
}
 
void loop() {
  int ctsValue2 = digitalRead(ctsPin2);
  int ctsValue4 = digitalRead(ctsPin4);
  int ctsValue6 = digitalRead(ctsPin6);
  int ctsValue8 = digitalRead(ctsPin8);
  int ctsValue10 = digitalRead(ctsPin10);
  
  if (ctsValue2 == HIGH){
    digitalWrite(ledPin2, HIGH);
    Serial.println("TOUCHED 2");
  }
  else{
    digitalWrite(ledPin2,LOW);
    Serial.println("not touched 2");
  }

  if (ctsValue4 == HIGH){
    digitalWrite(ledPin4, HIGH);
    Serial.println("TOUCHED 4");
  }
  else{
    digitalWrite(ledPin4,LOW);
    Serial.println("not touched 4");
  }
  if (ctsValue6 == HIGH){
    digitalWrite(ledPin6, HIGH);
    Serial.println("TOUCHED 6");
  }
  else{
    digitalWrite(ledPin6,LOW);
    Serial.println("not touched 6");
  }
  if (ctsValue8 == HIGH){
    digitalWrite(ledPin8, HIGH);
    Serial.println("TOUCHED 8");
  }
  else{
    digitalWrite(ledPin8,LOW);
    Serial.println("not touched 8");
  }
  
  if (ctsValue10 == HIGH){
    digitalWrite(ledPin10, HIGH);
    Serial.println("TOUCHED 10");
  }
  else{
    digitalWrite(ledPin10,LOW);
    Serial.println("not touched 10");
  }
}
