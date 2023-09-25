/* 
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int led_pin1 = 13;
int led_pin2 = 12;
int blink_duration1 = 1000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_pin1, HIGH);
  delay(blink_duration1);
  digitalWrite(led_pin1, LOW);
  delay(blink_duration1);  
    // turn the LED on (HIGH is the voltage level)                    // wait for a second
  digitalWrite(led_pin2, HIGH);
  delay(blink_duration1);
  digitalWrite(led_pin2, LOW);
  // turn the LED off by making the voltage LOW
  delay(blink_duration1);                // wait for a second
  
   
  
}
