/*
 * Simple script for students to start to work with Gravity: Non-contact Digital Liquid Level Sensor
 * https://www.dfrobot.com/product-1493.html you can find the item from this link
 */

// Initialise sensor pin to pin 2 
int liqudReaderPin = 2;

// If water detected this variable will be 1
int liquidLevel = 0;

void setup() {
  // initalise console communication
  Serial.begin(9600);

  // initialise sensor and led pins
  pinMode(liqudReaderPin,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  //read data from sensor 0 or 1
  liquidLevel = digitalRead(liqudReaderPin);

  // display data to console
  Serial.print("liquidLevel= "); Serial.println(liquidLevel, DEC);

  /*
   * if liquid detected which means varialbe will be 1 in other words true
   * open led built in arduino uno otherwise leave led closed
   */
  if (liquidLevel)
  {
    digitalWrite(LED_BUILTIN, HIGH);
  } else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  delay(500);
}
