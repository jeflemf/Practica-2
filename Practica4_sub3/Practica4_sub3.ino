int leds[] = {14, 15, 16, 17, 18, 19};
int switch_dos = 3;
int switch_uno = 2;
int switch_tres = 4;
int switch_cuatro = 5;
int switchState1= LOW;
int switchState2= LOW;
int switchState3= LOW;
int switchState4= LOW;
void setup() {
      for (int x = 0; x < 8; x++) {
  pinMode(leds[x], OUTPUT);
      }
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(switch_uno, INPUT);
  pinMode(switch_dos, INPUT);
  pinMode(switch_tres, INPUT);
  pinMode(switch_cuatro, INPUT);
  Serial.begin(9600);
}


void loop() {
  switchState1=digitalRead(switch_uno);
  switchState2=digitalRead(switch_dos);
  switchState3=digitalRead(switch_tres);
  switchState4=digitalRead(switch_cuatro);
  
   
  if(switchState1 == HIGH && switchState3 == HIGH){
  
  Serial.println("Gracias por su atencion");
  
  }
  if(switchState2 == HIGH && switchState4 == HIGH){
  
  Serial.println("Gracias por su atencion");
  }
  
  if(switchState1 == HIGH){
    
  Serial.println("Practica No. 4 - Jefferson Yahir Gonzalez Gonzalez");
  }
  
  if (switchState2 == HIGH) {
    delay(500);
    Serial.println("velocidad 1");
    velocidad();
  }
   if(switchState3 == HIGH){
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(2000);
    
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(2000);
    
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    delay(2000);
    
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
  }
}
void velocidad() {
  for (int x= 0; x< 8; x++) {
    digitalWrite(leds[x], HIGH);
    delay(500);
    digitalWrite(leds[x], LOW);
  }
  for (int x = 7;  x>= 0; x--) {
    digitalWrite(leds[x], HIGH);
    delay(500);
    digitalWrite(leds[x], LOW);
  }
  
}
