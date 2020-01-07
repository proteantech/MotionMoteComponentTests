/*
  This will turn the MotionMote's LED when motion is detected on the PIR
*/

#define LED            5 
#define MOTION_PIN     3  // D3
int pirVal = LOW;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  Serial.println("setup");
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  pinMode(MOTION_PIN, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("BEGIN LOOP");
  pirVal = digitalRead(MOTION_PIN);
  digitalWrite(LED, pirVal);   // turn the LED on (HIGH is the voltage level)
  delay(200);                      
}
