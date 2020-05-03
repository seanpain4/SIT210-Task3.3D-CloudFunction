int led = D6;

void setup()
{
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
    pinMode(led, OUTPUT);
}

void myHandler(const char *event, const char *data)
{
    if (strcmp(data, "wave") == 0)
    {
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
    }
    else if (strcmp(data, "pat") == 0)
    {
        digitalWrite(led, HIGH);
        delay(2000);
        digitalWrite(led, LOW);
    }
}

void loop()
{

}
