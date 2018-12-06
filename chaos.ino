#include <Console.h>

int a = 31;
int b = 35;
int c = 9;
int d = 11;
int e = 37;
int f = 23;
int g = 4;
int h = 24;
int i = 26;
int j = 22;
int k = 34;
int l = 6;
int m = 36;
int n = 3;
int o = 38;
int p = 30;
int q = 25;
int r = 29;
int s = 45;
int t = 2;
int u = 28;
int v = 10;
int w = 8;
int x = 5;
int y = 12;
int z = 32;


int c2 = 13;
int h2 = 27;
int a2 = 33;
int o2 = 39;


int c3 = 41;
int h3 = 42;
int a3= 43;
int o3 = 44;


String input;
String woord;

int index;

int smile = 40;
int smile2 = 7;



String currentcharacter;

void setup() {


  

Serial.begin(9600);

 


  

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
  pinMode(i, OUTPUT);
  pinMode(j, OUTPUT);
  pinMode(k, OUTPUT);
  pinMode(l, OUTPUT);
  pinMode(m, OUTPUT);
  pinMode(n, OUTPUT);
  pinMode(o, OUTPUT);
  pinMode(p, OUTPUT);
  pinMode(q, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(s, OUTPUT);
  pinMode(t, OUTPUT);
  pinMode(u, OUTPUT);
  pinMode(v, OUTPUT);
  pinMode(w, OUTPUT);
  pinMode(x, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(z, OUTPUT);


  pinMode(c2, OUTPUT);
  pinMode(h2, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(o2, OUTPUT);

    pinMode(c3, OUTPUT);
  pinMode(h3, OUTPUT);
  pinMode(a3, OUTPUT);
  pinMode(o3, OUTPUT);

  pinMode(smile, OUTPUT);
  pinMode(smile2, OUTPUT);

  

  

  
 

 
  
}

void loop() {



   if (Serial.available() > 0) {
    input= Serial.readString();
   

woord = "";
    woord+=input+"{";
    
    
    for (index = 0; index < woord.length() ; index++){

        currentcharacter = woord.substring(index, index +1);
        Serial.println(currentcharacter);
        

 
int lamp = int(currentcharacter.charAt(0)) - 97;
  
        switch (lamp) {
          case 0:
            digitalWrite(a, HIGH);
             delay(500);
            digitalWrite(a, LOW);
            break;
          case 1:
            digitalWrite(b, HIGH);
             delay(500);
            digitalWrite(b, LOW);
            break;
          case 2:
            digitalWrite(c, HIGH);
             delay(500);
            digitalWrite(c, LOW);
            break;
          case 3:
            digitalWrite(d, HIGH);
             delay(500);
            digitalWrite(d, LOW);
            break;
          case 4:
            digitalWrite(e, HIGH);
            delay(500);
            digitalWrite(e, LOW);
            break;
          case 5:
            digitalWrite(f, HIGH);
             delay(500);
            digitalWrite(f, LOW);
            break;
          case 6:
            digitalWrite(g, HIGH);
             delay(500);
            digitalWrite(g, LOW);
            break;
          case 7:
            digitalWrite(h, HIGH);
             delay(500);
            digitalWrite(h, LOW);
            break;
          case 8:
            digitalWrite(i, HIGH);
             delay(500);
            digitalWrite(i, LOW);
            break;
          case 9:
            digitalWrite(j, HIGH);
             delay(500);
            digitalWrite(j, LOW);
            break;
          case 10:
            digitalWrite(k, HIGH);
             delay(500);
            digitalWrite(k, LOW);
            break;
          case 11:
            digitalWrite(l, HIGH);
             delay(500);
            digitalWrite(l, LOW);
            break;
          case 12:
            digitalWrite(m, HIGH);
             delay(500);
            digitalWrite(m, LOW);
            break;
          case 13:
            digitalWrite(n, HIGH);
             delay(500);
            digitalWrite(n, LOW);
            break;
          case 14:
            digitalWrite(o, HIGH);
             delay(500);
            digitalWrite(o, LOW);
            break;
          case 15:
            digitalWrite(p, HIGH);
             delay(500);
            digitalWrite(p, LOW);
            break;
          case 16:
            digitalWrite(q, HIGH);
             delay(500);
            digitalWrite(q, LOW);
            break;
          case 17:
            digitalWrite(r, HIGH);
             delay(500);
            digitalWrite(r, LOW);
            break;
          case 18:
            digitalWrite(s, HIGH);
             delay(500);
            digitalWrite(s, LOW);
            break;
          case 19:
            digitalWrite(t, HIGH);
             delay(500);
            digitalWrite(t, LOW);
            break;
          case 20:
            digitalWrite(u, HIGH);
             delay(500);
            digitalWrite(u, LOW);
            break;
          case 21:
            digitalWrite(v, HIGH);
             delay(500);
            digitalWrite(v, LOW);
            break;
          case 22:
            digitalWrite(w, HIGH);
             delay(500);
            digitalWrite(w, LOW);
            break;
          case 23:
            digitalWrite(x, HIGH);
             delay(500);
            digitalWrite(x, LOW);
            break;
          case 24:
            digitalWrite(y, HIGH);
             delay(500);
            digitalWrite(y, LOW);
            break;
          case 25:
            digitalWrite(z, HIGH);
             delay(500);
            digitalWrite(z, LOW);

            break;
          case 26: 

          digitalWrite(c2, HIGH);
digitalWrite(h2, HIGH);
digitalWrite(a2, HIGH);
digitalWrite(o2, HIGH);
digitalWrite(s, HIGH);

digitalWrite(c3, HIGH);
digitalWrite(h3, HIGH);
digitalWrite(a3, HIGH);
digitalWrite(o3, HIGH);
digitalWrite(s, HIGH);

digitalWrite(c, HIGH);
digitalWrite(h, HIGH);
digitalWrite(a, HIGH);
digitalWrite(o, HIGH);
digitalWrite(s, HIGH);

digitalWrite(smile, HIGH);
digitalWrite(smile2, HIGH);


            
            break;
        
          
        

        
        }

           delay(700);
    }

 
    

    
   

  

   
   }
   }

   
  

  
