int inButton = 9;

void setup()
{
    pinMode(inButton, OUTPUT);
}
// led lights

void loop()
{
    digitalWrite(inButton, HIGH);
    delay(100);
    digitalWrite(inButton, LOW);
    delay(100);
}