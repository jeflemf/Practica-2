void setup(){
pinMode(2, INPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}
void loop(){
  if(digitalRead(3) == HIGH){
    for(int x= 0; x>=0 && x<=99; x++){
    Serial.println(x);
      delay(10);
      if(digitalRead(2) == HIGH){
      x= x-2;
      }
    }
  }
  if(digitalRead(2) == HIGH){
    for(int x=99 ; x>=0 && x<=99; x--){
    Serial.println(x);
      delay(10);
      if(digitalRead(3) == HIGH){
      x= x+2;
      }
    }
  }
}
