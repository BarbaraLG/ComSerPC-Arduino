#define DEBUG(a) Serial.println(a);
String Serie1 = "Serie 1", Serie2 = "Serie 2", Serie3 = "Serie 3";
const int LED1 = 9, LED2 = 10,LED3 = 11, LED4 = 12;
int rep;
void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  Serial.begin(9600);
  Serial.println("Práctica 2");
  Serial.println("*********");
}

void loop() {
  if (Serial.available() > 0) {
    String entrada = Serial.readStringUntil('\n');
    DEBUG(entrada);
    
    if(entrada.equals(Serie1))
  {
    for(rep=0;rep<3;rep++)
    {
    digitalWrite(LED1,HIGH);
    delay(1000);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    delay(1000);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    delay(1000);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,HIGH);
    delay(1000);
    digitalWrite(LED4,LOW);
    }
    Serial.println("Finalizado");
  }
  else{

    if(entrada.equals(Serie2))
  {
    for(rep=0;rep<3;rep++)
    {
    digitalWrite(LED4,HIGH);
    delay(1000);
    digitalWrite(LED4,LOW);
    digitalWrite(LED3,HIGH);
    delay(1000);
    digitalWrite(LED3,LOW);
    digitalWrite(LED2,HIGH);
    delay(1000);
    digitalWrite(LED2,LOW);
    digitalWrite(LED1,HIGH);
    delay(1000);
    digitalWrite(LED1,LOW);
    }
    Serial.println("Finalizado");
  }
  else{
    if(entrada.equals(Serie3))
  {
    for(rep=0;rep<3;rep++)
    {
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    delay(1000);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED1,HIGH);
    delay(1000);
    digitalWrite(LED4,LOW);
    digitalWrite(LED1,LOW);
    }
    Serial.println("Finalizado");
  }
  else{
    Serial.println("Esa entrada no existe");
  }
  } 
  }
  }
 
}
