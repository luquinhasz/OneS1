const int botao1 = 3;
const int botao2 = 4;
const int botao3 = 5;
const int led1 = 6;
const int led2 = 7;
const int led3 = 8;
const int led4 = 9;
const int led5 = 10;

int var1;
int var2;

 void setup()
 { 
      pinMode(botao1, INPUT);
      pinMode(botao2, INPUT);
      pinMode(botao3, INPUT); 

      pinMode(led1, OUTPUT);
      pinMode(led2, OUTPUT ); 
      pinMode(led3, OUTPUT ); 
      pinMode(led4, OUTPUT ); 
      pinMode(led5, OUTPUT ); 
       //Serial.begin(9600);
 }
 
int valor1 ;
int valor2 ;
int valor3 ;

 void loop()
 {
    valor1 = digitalRead(botao1);
    valor2 = digitalRead(botao2);
    valor3 = digitalRead(botao3);

   if(valor1){
       acendetudo() ;
   }
   if(valor2){
        apagatudo();
   }

 if(valor3){
       digitalWrite(led1, HIGH);
       delay(1000);
       digitalWrite(led1, LOW);
       delay(1000); 
       digitalWrite(led2, HIGH);
       delay(1000);
       digitalWrite(led2, LOW);
       delay(1000);
       digitalWrite(led3, HIGH);
       delay(1000);
       digitalWrite(led3, LOW);
       delay(1000);
       digitalWrite(led4, HIGH);
       delay(1000);
       digitalWrite(led4, LOW);
       delay(1000);
       digitalWrite(led5, HIGH);
       delay(1000);
       digitalWrite(led5, LOW);
       delay(2000); 
       digitalWrite(led1, HIGH);
       digitalWrite(led2, HIGH);
       digitalWrite(led3, HIGH);
       digitalWrite(led4, HIGH);
       digitalWrite(led5, HIGH);
       delay(1000);
       digitalWrite(led1, LOW);
       digitalWrite(led2, LOW);
       digitalWrite(led3, LOW);
       digitalWrite(led4, LOW);
       digitalWrite(led5, LOW);

   }
 }

       void acendetudo()
{
       digitalWrite(led1, HIGH);
       digitalWrite(led2, HIGH);
       digitalWrite(led3, HIGH);
       digitalWrite(led4, HIGH);
       digitalWrite(led5, HIGH);
   }
       void apagatudo()
 {
       digitalWrite(led1, LOW);
       digitalWrite(led2, LOW);
       digitalWrite(led3, LOW);
       digitalWrite(led4, LOW);
       digitalWrite(led5, LOW);
     }
