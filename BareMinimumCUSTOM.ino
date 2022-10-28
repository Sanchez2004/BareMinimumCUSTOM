
int signalShort = 200;
int signalLong = 500;
int shortDelay = 200;
int longDelay = 1000;

void setup() {
  /* Every program has a void setup that runs once and loop.
   * 
   * Maximm space on broad is 32256 bytes
   * Global variables and local vars share dynmaic memory? Total of 2048 bytes
   * 
   */


pinMode(8, OUTPUT); // or can be pinMode(LED_BUILTIN, OUTPUT) were LED_BUILTIN == pin 13.
}

void loop() {
  /* put your main code here, to run repeatedly:
   *  
   *  NOTES:
   *  delay(ms), which 1000 == 1 second. Allowed data types: unsigned long. !Brings most other activity to a halt!
   *  https://www.arduino.cc/reference/en/language/functions/time/delay/
   *  
   */
   
  //Simplie power to pin code//
  //digitalWrite(8, HIGH);
  //delay(1000);
  //digitalWrite(8, LOW);
  //delay(300);

   pinPowerToLed(8, signalShort);
   pinPowerToLed(8, signalShort);
   pinPowerToLed(8, signalShort);
   delay(shortDelay);
   pinPowerToLed(8, signalLong);
   pinPowerToLed(8, signalLong);
   pinPowerToLed(8, signalLong);
   delay(shortDelay);
   pinPowerToLed(8, signalShort);
   pinPowerToLed(8, signalShort);
   pinPowerToLed(8, signalShort);
   delay(longDelay);
   
}

/*Wanted to see how a func would looke like.
 * 
 * Power a pin via the number of the pin to be
 * powered passed in to the function.
 */
void pinPowerToLed( int pinNum, int fristDelay, int secondDelay  ){

  //pinMode(num, OUTPUT); //Is this a good idea?

  digitalWrite(pinNum, HIGH);
  delay(fristDelay);
  digitalWrite(pinNum, LOW);
  delay(secondDelay);
}

/*Wanted to see how a non-overloaded func would looke like.
 * 
 * Power a pin via the number of the pin to be
 * powered passed in to the function.
 */
void pinPowerToLed( int pinNum, int DelayTime ){

  //pinMode(num, OUTPUT); //Is this a good idea?

  digitalWrite(pinNum, HIGH);
  delay(DelayTime);
  digitalWrite(pinNum, LOW);
  delay(DelayTime);
}
