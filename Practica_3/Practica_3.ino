/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto Electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Máquina Expendedora
   Dev:Oscar Jefferson Yahir Gonzalez Gonzalez
   Fecha: 19 de abril
*/
#define LedL 13
int PushL = 6;
int PushR= 7;
int Seleccionar = 1;

struct datos_productos {
  char nombres_productos[100];
  byte cantidad;
};
datos_productos prod1 = {"doritos", 25};
datos_productos prod2 = {"chokys", 25};
datos_productos prod3 = {"lipton", 25};
datos_productos prod4 = {"kisses", 25};
void setup(){
  pinMode(PushL, INPUT);
  pinMode(PushR, INPUT);
  pinMode(LedL, OUTPUT);
  Serial.begin(9600);
  Serial.println("Bienvenido a la maquina expendedora");
}
void loop() {
  if(digitalRead(PushL) == HIGH){
    Seleccionar--;
    digitalWrite(LedL, HIGH);
    if(Seleccionar < 1){
      Seleccionar = 4;
    }
      if(Seleccionar == 1){
        Serial.println("Datos del Producto 1:");
        Serial.print("Nombre:");
        Serial.println(prod1.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(prod1.cantidad);
        Serial.println("------------------------------------------");
      }
      if(Seleccionar == 2){
        Serial.println("Datos del Producto 2:");
        Serial.print("Nombre:");
        Serial.println(prod2.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(prod2.cantidad);
        Serial.println("------------------------------------------");
      }
      if(Seleccionar == 3){
        Serial.println("Datos del Producto 3:");
        Serial.print("Nombre:");
        Serial.println(prod3.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(prod3.cantidad);
        Serial.println("------------------------------------------");
      }
      if(Seleccionar == 4){
        Serial.println("Datos del Producto 4:");
        Serial.print("Nombre:");
        Serial.println(prod4.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(prod4.cantidad);
        Serial.println("------------------------------------------");
      }
    else{
      digitalWrite(LedL, LOW);
    }
  }
  if(digitalRead(PushR) == HIGH)
  {
    Seleccionar++;
    digitalWrite(LedL, HIGH);
    if(Seleccionar > 4){
      Seleccionar = 1;
    }
      if(Seleccionar == 1){
        Serial.println("Datos del Producto 1:");
        Serial.print("Nombre:");
        Serial.println(prod1.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(prod1.cantidad);
        Serial.println("------------------------------------------");
      }
      if(Seleccionar == 2){
        Serial.println("Datos del Producto 2:");
        Serial.print("Nombre:");
        Serial.println(prod2.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(prod2.cantidad);
        Serial.println("------------------------------------------");
      }
      if(Seleccionar == 3){
        Serial.println("Datos del Producto 3:");
        Serial.print("Nombre:");
        Serial.println(prod3.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(prod3.cantidad);
        Serial.println("------------------------------------------");
      }
      if(Seleccionar == 4){
        Serial.println("Datos del Producto 4:");
        Serial.print("Nombre:");
        Serial.println(prod4.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(prod4.cantidad);
        Serial.println("------------------------------------------");
      }
    delay(800);
  }
  else{
    digitalWrite(LedL, LOW);
  }
}
