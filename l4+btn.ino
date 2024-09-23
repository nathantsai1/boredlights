// l4 but with button
// why oh why can't i find my resistors???
// plss
// i have such bad organization rn :(((
// oh well

const int greenLed = 2;
const int redLed = 7;
const int buttonPin = 12;
const int ledPin = 13;
int buttonState = 0;
void setup()
{
    pinMode(buttonPin, INPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(redLed, OUTPUT);
}

void loop()
{
        // for whether button is on or not
        buttonState = digitalRead(buttonPin);
        if (buttonState == HIGH)
        {
            digitalWrite(greenLed, HIGH);
            delay(100);
            digitalWrite(redLed, HIGH);
        }
        else
        {
            digitalWrite(greenLed, LOW);
            digitalWrite(redLed, LOW);
        }
        delay(100)
        doooooo not ruun bc the setup is s***
}