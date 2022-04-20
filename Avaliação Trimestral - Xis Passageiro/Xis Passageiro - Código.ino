const int leds = 2;

const int pot = 0;
int var = 0;

 void setup()
 { 

      pinMode(leds, OUTPUT);
       Serial.begin(9600);
 }

 void loop()
 {
   var = analogRead(pot);
   Serial.println(var);
   delay(200);

   if (var > 500){
digitalWrite(leds, HIGH);
   }
  
   else {
digitalWrite(leds, LOW);
 
   }
 }