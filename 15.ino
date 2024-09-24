// make a dc motor
// br my wifi isn't cooperating with me :(
// can't use a motor whyyyyyyyyyyyy?
// what are l293d boards??
const int in1 = 10;
const int in2 = 9;
const int mot = 12;

void setup()
{
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(mot, OUTPUT);
}

void loop()
{
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(mot, LOW);
    delay(1000)
    digitalWrite(in1, HIGH);
    digitalWrite(in2, HIGH);
    digitalWrite(mot, HIGH);
    delay(1000)
}