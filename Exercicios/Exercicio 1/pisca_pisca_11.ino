const int led1 = 6;

 void setup()
 { 

      pinMode(led1, OUTPUT);
       //Serial.begin(9600);
 }
 

 void loop()
 {
  
       digitalWrite(led1, HIGH);
       delay(500);
       digitalWrite(led1, LOW);
       delay(500);
 }