int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
int switch_uno = 10;
int switch_dos = 11;
int switchState1=LOW;
int switchState2=LOW;
int retraso=500;


void setup(){
  for (int x = 0; x < 8; x++) {
    pinMode(leds[x], OUTPUT);
  }
  pinMode(switch_uno, OUTPUT);
  pinMode(switch_dos, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  switchState1=digitalRead(switch_uno);
  switchState2=digitalRead(switch_dos);
  if (switchState1 == HIGH) {
    retraso = 500;
    Serial.println("velocidad 1");
    velocidad();
  }
  
  else if (switchState2 == HIGH) {
    retraso = 1000;
    Serial.println("velocidad 2");
    velocidad();
  }
  
}
void velocidad() {
  for (int x= 0; x< 8; x++) {
    digitalWrite(leds[x], HIGH);
    delay(retraso);
    digitalWrite(leds[x], LOW);
  }
  
  for (int x = 7;  x>= 0; x--) {
    digitalWrite(leds[x], HIGH);
    delay(retraso);
    digitalWrite(leds[x], LOW);
  }
}
