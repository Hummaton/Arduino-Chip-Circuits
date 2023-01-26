

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
