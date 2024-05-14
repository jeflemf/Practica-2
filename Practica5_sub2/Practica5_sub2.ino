int buzz= 3; 
int boton = 2 ;
int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;

void setup()    
{    
  pinMode(boton, INPUT);
  pinMode(buzz, OUTPUT); 
}      
void loop()   
{   
if (digitalRead(boton) == HIGH) { 
    tone(buzz, a, 500);
    delay(550);
    tone(buzz, a, 500);
    delay(550);     
    tone(buzz, a, 500); 
    delay(550);
    tone(buzz, f, 350);  
    delay(400);
    tone(buzz, cH, 150);
    delay(200); 
    
    tone(buzz, a, 500);
    delay(550);
    tone(buzz, f, 350);
    delay(400);
    tone(buzz, cH, 150);
    delay(200);
    tone(buzz, a, 1000);   
    delay(1050);
   
    tone(buzz, eH, 500);
    delay(550);
    tone(buzz, eH, 500);
    delay(550);
    tone(buzz, eH, 500); 
    delay(550);   
    tone(buzz, fH, 350);
    delay(400); 
    tone(buzz, cH, 150);
    delay(200);
    
    tone(buzz, gS, 500);
    delay(550);
    tone(buzz, f, 350);
    delay(400);
    tone(buzz, cH, 150);
    delay(200);
    tone(buzz, a, 1000);
    delay(1050);
    
    tone(buzz, aH, 500);
    delay(550);
    tone(buzz, a, 350);
    delay(400); 
    tone(buzz, a, 150);
    delay(200);
    tone(buzz, aH, 500);
    delay(550);
    tone(buzz, gSH, 250); 
    delay(300);
    tone(buzz, gH, 250);
    delay(300);
    
    tone(buzz, fSH, 125);
    delay(175);
    tone(buzz, fH, 125);
    delay(175);    
    tone(buzz, fSH, 250);
    delay(300);
    tone(buzz, aS, 250);
    delay(300);    
    tone(buzz, dSH, 500); 
    delay(550); 
    tone(buzz, dH, 250); 
    delay(300); 
    tone(buzz, cSH, 250);
    delay(300);  

    tone(buzz, cH, 125);
    delay(175);  
    tone(buzz, b, 125); 
    delay(175); 
    tone(buzz, cH, 250); 
    delay(300);     
    delay(250);
    tone(buzz, f, 125); 
    delay(175); 
    tone(buzz, gS, 500); 
    delay(550); 
    tone(buzz, f, 375); 
    delay(425); 
    tone(buzz, a, 125);
    delay(175); 
    
    tone(buzz, cH, 500); 
    delay(550);
    tone(buzz, a, 375);  
    delay(425);
    tone(buzz, cH, 125); 
    delay(175);
    tone(buzz, eH, 1000); 
    delay(1050);
 
    
    tone(buzz, aH, 500);
    delay(550);
    tone(buzz, a, 350); 
    delay(400);
    tone(buzz, a, 150);
    delay(200);
    tone(buzz, aH, 500);
    delay(500+50);
    tone(buzz, gSH, 250);
    delay(250+50); 
    tone(buzz, gH, 250);
    delay(250+50);
    
    tone(buzz, fSH, 125);
    delay(175);
    tone(buzz, fH, 125);  
    delay(175);  
    tone(buzz, fSH, 250);
    delay(550);
    tone(buzz, aS, 250);  
    delay(300);  
    tone(buzz, dSH, 500);  
    delay(550);
    tone(buzz, dH, 250);  
    delay(300);
    tone(buzz, cSH, 250);
    delay(300);  
 
    tone(buzz, cH, 125);  
    delay(175);
    tone(buzz, b, 125);  
    delay(175);
    tone(buzz, cH, 250);
    delay(550);
    tone(buzz, f, 250); 
    delay(300); 
    tone(buzz, gS, 500); 
    delay(550); 
    tone(buzz, f, 375);  
    delay(425);
    tone(buzz, cH, 125); 
    delay(175);
  
    tone(buzz, a, 500); 
    delay(550);           
    tone(buzz, f, 375);  
    delay(425);          
    tone(buzz, c, 125); 
    delay(175);  
    tone(buzz, a, 1000);
    delay(3050);       
  }
}