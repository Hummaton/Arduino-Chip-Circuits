
void setup()
{
  pinMode(12, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(12, HIGH);  //run at max speed allowed
  delay(2000); // Wait for 2 second(s)
  digitalWrite(12, LOW);
  delay(2000);
}