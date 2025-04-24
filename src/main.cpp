

#include <Arduino.h>


#define senzor A0

void setup() {

  
  Serial.begin(9600);
 
}

void loop() {
  
  
  int vrednost = analogRead(senzor);
  float tlakBar = ((6./ 790.) * vrednost); 

 

  
    Serial.print(tlakBar);
    Serial.println(" cigo bar");
    Serial.print(vrednost);
    Serial.println(" bit");
    delay(500);
    

    
  }
  
  
//  drma_je_pedr
 
  



  
 






