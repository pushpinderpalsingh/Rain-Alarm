
int rainsense= 0; // analog sensor input pin 0
int buzzerout= 8; // digital output pin 10 - buzzer output
int countval= 0; // counter value starting from 0 and goes up by 1 every second
 
void setup(){
   Serial.begin(9600);
   pinMode(buzzerout, OUTPUT);
   pinMode(rainsense, INPUT);
}
void loop(){
   int rainSenseReading = analogRead(rainsense);
   Serial.println(rainSenseReading); // serial monitoring message 
   delay(250);// rain sensing value from 0 to 1023.
   // from heavy rain - no rain.
   if (countval >= 400){ 
      Serial.print("Heavy rain");
      digitalWrite(buzzerout, HIGH);  //raise an alert after x time
   }}
