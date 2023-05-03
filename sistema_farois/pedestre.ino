int counter;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 10; ++counter) {
    digitalWrite(8, HIGH);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(8, LOW);
    delay(300); // Wait for 300 millisecond(s)
  }
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)

  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)

  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)

  digitalWrite(8, LOW);
  digitalWrite(12, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  
  digitalWrite(12, LOW);
  digitalWrite(7, HIGH);
}