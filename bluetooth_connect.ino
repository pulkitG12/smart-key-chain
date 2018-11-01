String readString;
void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
}
void loop()
{
  while(Serial.available())
  {
    delay(3);
    char c = Serial.read();
    readString += c;
  }
  if(readString.length() >0)
  {
    Serial.println(readString);
    if(readString == "*where is my key#")
   {
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
  }
    if(readString == "*where is my keychain#")
   {
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
  }
   if(readString == "*find my key#")
   {
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
  }
    else if(readString == "*found it#")
   {
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
  }
  readString="";
  }
}
