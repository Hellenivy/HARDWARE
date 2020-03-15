 int Black=9;
 int White=10; 
 int Red=11;
 int Green=12;
 int Blue=13;
  
void setup(){
 pinMode(Red,OUTPUT);
 pinMode(Green,OUTPUT);
 pinMode(Blue,OUTPUT);
 pinMode(White,OUTPUT);
 pinMode(Black,OUTPUT);

}

void loop() {
  digitalWrite(Red,HIGH);
  delay(500);  
  digitalWrite(Red,LOW);
  delay(500);
  digitalWrite(Green,HIGH);
  delay(500);
  digitalWrite(Green,LOW);
  delay(500);
  digitalWrite(Blue,HIGH);
  delay(500);
  digitalWrite(Blue,LOW);
  delay(500);
  digitalWrite(White,HIGH);
  delay(500);
  digitalWrite(White,LOW);
  delay(500);
  digitalWrite(Black,HIGH);
  delay(500);
  digitalWrite(Black,LOW);
  delay(500);

}

