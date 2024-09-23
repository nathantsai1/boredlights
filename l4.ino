// colorful lights!!
// I def know how to do this?
// how many cabkes do i need?
// i actually need so many of the resistors 220 ohm!!
// guess I'll only do 2 just to not use too many resistors 
// not from tutorial
// kind of
// ps arduino lights work, yay!

// which pin?
const int greenLed = 2;
const int redLed = 7;

void start()
{
    pinMode(greenLed, OUTPUT);
    pinMode(redLed, OUTPUT);
}

void loop()
{
    // write green
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    delay(100);
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
    delay(100);
}