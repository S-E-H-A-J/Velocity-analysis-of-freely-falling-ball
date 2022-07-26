#include <SharpIR.h>



SharpIR SharpIR(A0, 1080);
void setup() {
   
 Serial.begin(9600);
 
}

void loop() {
    
      delay(40);

  unsigned long startTime=millis();  
  float d1=SharpIR.distance();
  delay(40);
  float d2=SharpIR.distance();
  float v1=(d1-d2)/4;
  
  delay(40);
  float d3=SharpIR.distance();
  float v2=(d2-d3)/4;
  float a=(v2-v1)/0.04;
  Serial.print("Accelation is: "); 
  Serial.println(a);

  unsigned long endTime=millis()-startTime; 
 

    
     
}
