
int roleta = 0;


void setup()

{
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
  
  roleta = 0;
  
}

void loop()
{
  if(digitalRead(3) == 1){
    digitalWrite(2, HIGH);
  }
     if (digitalRead(4) == 1) {
       digitalWrite(2, LOW); 
     }
     delay(10);
      
  
}