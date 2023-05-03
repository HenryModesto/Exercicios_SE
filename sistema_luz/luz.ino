int ligar = 0;

int my_1 = 0;

int my_0 = 0;

int desligar = 0;

int botao = 0;

int contador = 0;

void setup()
{
  pinMode(5, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
  pinMode(8, INPUT);

  contador = 0;
}

void loop()
{
  if (digitalRead(5) == 1) {
    digitalWrite(7, HIGH);
  }
  if (digitalRead(6) == 1) {
    digitalWrite(7, LOW);
  }
  delay(200); // Wait for 200 millisecond(s)
  if (digitalRead(8) == 1) {
    contador = (contador + 1);
    if (contador % 2 == 0) {
      digitalWrite(7, LOW);
    } else {
      digitalWrite(7, HIGH);
    }
  }
}