// This program will make the LED attached to Digital Pin 2 blink
int ledPin = 2;

void setup()
{
  // Assign the pin with the first parameter and the type with the second
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // Sends a high signal (turing on) the ledPin
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // Sends a high signal (turing off) the ledPin
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}