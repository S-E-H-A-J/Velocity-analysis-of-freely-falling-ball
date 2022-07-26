float s1=0,s2=0;
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  
  
}

void loop() {
  s2=analogRead(A0);
  delay(40);
  s1=analogRead(A0);
  float v=(s2-s1)/40;
  
//  Serial.print("Speed is :");
  Serial.print(" ");
  Serial.println(v);
//  Serial.println(" m/sec");
//  delay(100);  

}
