int decodificador_A=2;
int decodificador_B=3;
int decodificador_C=4;
int decodificador_D=5;
int switch_1=6;
int switch_2=7;
int switch_3=8;

void setup()
{
 pinMode (2, OUTPUT);
 pinMode (3, OUTPUT);
 pinMode (4, OUTPUT);
 pinMode (5, OUTPUT);
 pinMode (6, INPUT);
 pinMode (7, INPUT);
 pinMode (8, INPUT);
}

void loop()
{
   if(digitalRead(switch_1) == HIGH && digitalRead(switch_2) == HIGH && digitalRead(switch_3) == HIGH){
   
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(500);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(500);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(500);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(500);
  }
   if(digitalRead(switch_1) == LOW && digitalRead(switch_2) == LOW && digitalRead(switch_3) == LOW){
   
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(500);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(500);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(500);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(500);
  }
  
  if (digitalRead (switch_1) == HIGH){
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(1000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(1000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(1000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(1000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(1000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(1000);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(1000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(1000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(1000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(1000);
  }
  
 if (digitalRead (switch_2) == HIGH){
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(2000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(2000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(2000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(2000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(2000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(2000);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(2000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(2000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(2000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(2000);
   
  }
  
 if (digitalRead (switch_3) == HIGH){
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(3000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(3000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(3000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
  delay(3000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(3000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(3000);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(3000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (5, LOW);
  delay(3000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(3000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, HIGH);
  delay(3000);
   
  }
  
}
