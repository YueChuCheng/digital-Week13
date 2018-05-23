const int ledCount = 5;    // the number of LEDs in the bar graph

int ledPins[] = { 
  2, 3, 4, 5, 6 };   // an array of pin numbers to which LEDs are attached
int ledPins2[] = { 
  7,8,9,10,11 };   // an array of pin numbers to which LEDs are attached


void setup() {
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT); 
    pinMode(ledPins2[thisLed], OUTPUT);
  }
}

void loop() {


  // loop over the LED array:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    digitalWrite(ledPins[thisLed],HIGH);
    digitalWrite(ledPins2[4-thisLed],HIGH);
    delay(60);
    digitalWrite(ledPins[thisLed],LOW);
     digitalWrite(ledPins2[4-thisLed],LOW);
    } 
 for (int thisLed = ledCount -1;thisLed>=0;thisLed--){
   digitalWrite(ledPins[thisLed],HIGH);

   digitalWrite(ledPins2[4-thisLed],HIGH);
   delay(60);
   if(thisLed ==0){
   delay(200);}
   
   else{
   digitalWrite(ledPins[thisLed],LOW);  
    digitalWrite(ledPins2[4-thisLed],LOW);  
   }
 }
   
 
}

