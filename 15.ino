// make a dc motor
// br my wifi isn't cooperating with me :(
// can't use a motor whyyyyyyyyyyyy?
// what are l293d boards??
// compare to .example.ino
// it worked
// after realizing that the L293D board was not pushed in enough
// its sooo annoying to push button/ hold motor down 'cause half the time it doesn't work
const int in1 = 10;
const int in2 = 9;
const int mot = 12;\\\

void setup()
{
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(mot, OUTPUT);\\\
}

void loop()
{ 
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);\\\
    // use analog, not digital for right applications
    digitalWrite(mot, LOW);
    delay(1000)
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(mot, HIGH);\\\
    delay(1000)


    /*************************************************/
    // clockwise
    analogWrite(in1, 200);
    analogWrite(in2, 0);
    delay(1000);
    // or not
    analogWrite(in2, 0);
    analogWrite(in2, 200);
    delay(1000)
}