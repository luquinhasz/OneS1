const int led1 = 6;
const int botao1 = 5;

 void setup()
 { 

      pinMode(led1, OUTPUT);
     pinMode(botao1, INPUT);
       //Serial.begin(9600);
 }
 
int valor1;

 void loop()
 {
valor1 = digitalRead(botao1);
  
   if(valor1) {
       digitalWrite(led1, HIGH);
       delay(500);
       digitalWrite(led1, LOW);
       delay(500);
 }
 }