// let's see... 
// btw im using tutorial super kit v2.0 sunfounder
// also im not going to do flowing lights bc its too easy
// and I would like to finish the arduino:   (~~)
//                                          \( *)/
//                                            /\
//WHAT IS LCD1602???
// ig theres lots to learn?
// ohh its not that bad :)
// aand a lot of wires!too many
// im doing command line arguments
// lemme guess

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
// I stole ^^^ from the example
const int E = 6;
const int RS = 4;
const int D4 = 10;
const int D5 = 11;
const int D6 = 12;
const int D7 = 13;
const int all = 4;
// ig?
void setup()
{
    // eerm help?
    // why i have to read documentation?
    Wire.begin()
    // how to differentiate between analog/digital pins?
    pinMode(E, INPUT);
    pinMode(RS, INPUT);
    pinMode(D4, INPUT);
    pinMode(D4, INPUT);
    pinMode(D5, INPUT);
    pinMode(D6, INPUT);
    pinMode(D7, INPUT);
    pinMode(all, INPUT);
}

void loop()
{
    // i shall use all functions in wire library
    // go to rs 'cause it has memory
     Wire.beginTransmission(RS);
     Wire.write('hello');
     Wire.endTransmission();
     delay(1000);
     //hmm
    //  where is my fancy dcumentation???
    // this doesn't look right -\(XX)/-?
    // :(((((((((((((((((((((((((((((((((((((((((((((((((((

}
// br installed wrong liquidcrystal, and it's taking so long
// its sad the arduino extention has been decapricated - I keep seeing it every time I open VScode
// oh well :(
// i was soo off!
// including the light
// nope i lied
// light works - its soo sensitive - maybe i did smth wrong?
