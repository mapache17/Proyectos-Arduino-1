void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(4)==HIGH){
    for(int x=5; x<=13; x++){
      digitalWrite(x, HIGH);
      delay(300);
    }
    for(int x=13; x>=5; x--){
      digitalWrite(x, LOW);
      delay(300);
    }
  }
  
  if (digitalRead(3)==HIGH){
    for(int x=5; x<=11; x++){
      digitalWrite(x, HIGH);
      digitalWrite(x+1, HIGH);
      digitalWrite(x+2, HIGH);
      delay(1000);
      digitalWrite(x, LOW);
      digitalWrite(x+1, LOW);
      digitalWrite(x+2, LOW);
    }
    for(int x=12; x>=7; x--){
      digitalWrite(x, HIGH);
      digitalWrite(x-1, HIGH);
      digitalWrite(x-2, HIGH);
      delay(1000);
      digitalWrite(x, LOW);
      digitalWrite(x-1, LOW);
      digitalWrite(x-2, LOW);
    }
  }
  
  if (digitalRead(2)==HIGH){
    for(int x=0; x<=4; x++){
      digitalWrite(9+x, HIGH);
      digitalWrite(9-x, HIGH);
      delay(300);
    }
    for(int x=4; x>=0; x--){
      digitalWrite(9+x, LOW);
      digitalWrite(9-x, LOW);
      delay(300);
    }
  }
}