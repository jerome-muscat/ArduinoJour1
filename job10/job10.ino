#define LED 9

void setup() {
   pinMode(LED,OUTPUT);
}

void loop() {
   analogWrite(LED, 0);
   delay(500);
   analogWrite(LED, 50);
   delay(500);
   analogWrite(LED, 100);
   delay(500);
   analogWrite(LED, 150);
   delay(500);
   analogWrite(LED, 200);
   delay(500);
   analogWrite(LED, 250);
   delay(500);
}