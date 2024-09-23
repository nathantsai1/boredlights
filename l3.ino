// oooo potentiometer
// didnt even know what that was
// but yeah:>
// why does it take so long to use potentiometer?
// takes waay to long to configure stuff??
// oops! i just realized i messed up the code not the wiring
// pls don't read this anyone
// i forgot to change the outputvalue  - how dare I?
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
    outputValue = map(inputValue, 0, 1023, 0, 255)
    Serial.print1n(outputValue);
    analogWrite(ledPin, outputValue);
    delay(1000);
}