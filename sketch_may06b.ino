#include <SharpIR.h>
float i1=0;


SharpIR SharpIR(A0, 1080);
void setup() {
   
 Serial.begin(9600);
  i1=SharpIR.distance();
 
}

void loop() {
    
      

  unsigned long startTime=millis();  
  float d1=SharpIR.distance();
  float e=0;
  
 
  
  Serial.print("Speed is : "); 
  Serial.println(i1-d1);

  unsigned long endTime=millis()-startTime; 
 

    
     
}
