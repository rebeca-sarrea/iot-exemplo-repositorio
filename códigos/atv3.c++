// C++ code
//

int ledPin = 6;
int sensorPin = 7;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(sensorPin, INPUT);
}

void loop()
{
    if( digitalRead(sensorPin) == HIGH){
        digitalWrite(ledPin, HIGH);
        delay (800);
    } else {
        digitalWrite(ledPin, LOW);
        delay (800);
    }
}