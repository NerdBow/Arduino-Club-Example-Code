// This program will read in the reading of the potentiometer 
// and print the value in the serial monitor

// This is the Analog Input pin 
// connected to the middle pin of the potentiometer
int inputPin = A0;

void setup()
{
  // This will start the serial monitor to print things
  Serial.begin(9600);
  // Make sure the set the pinMode of the pin to INPUT
  pinMode(inputPin, INPUT);
}

void loop()
{
  // Stores the value read from the potentiometer in a variable
  int reading = analogRead(inputPin);
  
  // Prints the reading varible
  Serial.println(reading);
  
  // Waits a bit so your computer will not explode with prints
  delay(100);
}