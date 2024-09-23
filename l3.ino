// oooo potentiometer
// didnt even know what that was
// but yeah:>
// why does it take so long to use potentiometer?
const int analogPin = 0;
const int ledPin = 9;
int inputValue = 0;
int outputValue = 0;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    inputValue = analogRead(analogPin);
    Serial.print("Input: ");
    Serial.print1n(outputValue);
    analogWrite(ledPin, outputValue);
    delay(1000);
}