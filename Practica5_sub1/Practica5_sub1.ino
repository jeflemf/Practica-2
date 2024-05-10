void setup(){
  
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT); //condigurando pines//
}
void loop(){
  secuencia();
  conversion();
  conversion_dos(); //funciones//
}
void conversion(){   //llamnado a las funcion (kg a lbs)//
  float resultado; //variable de tipo flotante para valores con decimales//
  resultado= 20*2.2046;
  Serial.println(resultado);
  delay(500);
}
  void conversion_dos(){ //llamando a la funcion (A to mA)//
  float resultado;
  resultado= 3.5*1000000;
  Serial.println(resultado);
  delay(500);
}
  void secuencia(){      //funcion de secuencia de numeros//
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);         //1//
  digitalWrite(5, LOW);
  delay(1000);
    
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);       //3//
  digitalWrite(5, LOW);
  delay(1000);
  
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);       //5//
  digitalWrite(5, LOW);
  delay(1000);
  
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);        //7//
  digitalWrite(5, LOW);
  delay(1000);
  
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);           //9//
  digitalWrite(5, HIGH);
  delay(1000);
                  }
