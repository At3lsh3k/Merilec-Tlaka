

#include <Arduino.h>

#define nizka 10
#define visoka 11
#define senzor A0

void setup() {
  pinMode(nizka, OUTPUT);
  pinMode(visoka, OUTPUT);
  
  Serial.begin(9600);
 
}

void loop() {
  
  
  int vrednost = analogRead(senzor);
  float tlakBar = ((6./ 790.) * vrednost); 

  // 97 bitov v luftu
  // 785 bitov v 6

  
    Serial.print(tlakBar);
    Serial.println(" cigo bar");
    Serial.print(vrednost);
    Serial.println(" bit");
    delay(500);
    
    if (tlakBar < 0.8){
      digitalWrite(nizka, HIGH);
      digitalWrite(visoka, LOW);
    } else if (tlakBar > 9.83) {
      digitalWrite(nizka, LOW);
      digitalWrite(visoka, HIGH);
    } else {
      digitalWrite(visoka, LOW);
      digitalWrite(nizka, LOW);
    }
  
    
  }
  
  
//  drma_je_pedr
 
  



  
 






