// This program will beep every .5 seconds for a duration of 200ms.

#define BUZZER         6
#define LED            5 
#define MOTION_PIN     3  // D3
#define DEBUGln(input) {Serial.println(input); delay(1);}
int pirVal = LOW;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  tone(BUZZER, 500, 200); //4200    
  delay(1000);                       // wait for a second 
}
