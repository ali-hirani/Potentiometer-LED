//Control LED Brightness using a potentiometer
//Fade based on the read-in potentiometer value (from 0 to 1024 or 0 to 5v)

int potPin = 2;     // select the input pin for the potentiometer
int ledPin = 9;     // select the pin for the LED
int val = 0;        // variable to store the value coming from the sensor
int brightness = 0; // how bright the LED is

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
}

void loop()
{
  val = analogRead(potPin);    // read the value from the sensor
  
  Serial.println(val); // print value to console

  brightness = val / (1024/255); // brightness is proportional to value

  analogWrite(ledPin, brightness);  // turn the ledPin on
}