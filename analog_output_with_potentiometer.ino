// This program will read in the reading of the potentiometer 
// and use it adjust the brightness of an LED

// This is the Analog Input pin 
// connected to the middle pin of the potentiometer
int inputPin = A0;

// If you plan to use analog output, you must choose a pin
// with the little swiggly line!!!
int ledPin = 3;


void setup()
{
  // This will start the serial monitor to print things
  Serial.begin(9600);
  // Make sure to set the pinMode of the pin to INPUT
  pinMode(inputPin, INPUT);
  // Make sure to set the pinMode of the LED to OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // Stores the value read from the potentiometer in a variable
  int reading = analogRead(inputPin);
  
  // map is a function which allows you to convert a value
  // within a range to another range
  // Here we are changing the range 0-1023
  // to the range of 0-255
  reading = map(reading, 0, 1023, 0, 255);
  
  // Write the transformed reading of the potentiometer to the led
  analogWrite(ledPin, reading);
  
  
  delay(100);
}