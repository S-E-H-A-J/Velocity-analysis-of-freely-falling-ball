void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  float s = 0.0,r;
  s = analogRead(A0);
  r = -0.2988*s+ 97.582;

  
  Serial.print(" ");
  Serial.println(r);
  delay(400);
  

}
