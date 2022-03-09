const int led1 = 6;
const int led2 = 7;

 void setup()
 { 

      pinMode(led1, OUTPUT);
      pinMode(led2, OUTPUT);
       //Serial.begin(9600);
 }
 

 void loop()
 {
  
       digitalWrite(led1, HIGH);
       delay(1000);
       digitalWrite(led1, LOW);
       delay(1000);

       digitalWrite(led2, HIGH);
       delay(1000);
       digitalWrite(led2, LOW);
       delay(1000);
 }