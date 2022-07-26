
int sen1=A0;
int i=0;

void setup()
{

  pinMode(sen1,INPUT);
  Serial.begin(9600);
}
  void loop()
  {

  i=analogRead(sen1);
 
  Serial.print("\n the velocity is : ");
  Serial.println();
  Serial.print(i);
  
 
  delay(500);
  }

  
