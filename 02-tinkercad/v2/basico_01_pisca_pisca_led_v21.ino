// C++ code
//
void setup()
{
  pinMode(13, OUTPUT); //LED_BUILTIN
}

void loop()
{
  digitalWrite(13, HIGH); //LED_BUILTIN
  delay(10000); // Wait for 3000 millisecond(s) = 3 seconds
  digitalWrite(13, LOW); //LED_BUILTIN
  delay(1000); // Wait for 1000 millisecond(s) = 1 second
}