const int relayPin = 7;      
unsigned long timeDelayON = 10000; // 10 segundos
unsigned long timeDelayOFF_corto = 7200000; //2 hrs
unsigned long timeDelayOFF_largo = 165600000; //46 hrs
unsigned long time_now = 0;
int i = 0;

void setup()
{
  pinMode(relayPin, OUTPUT);  // set pin as an output
}
void loop()                    
{
  i = 1;
  while (i < 5) 
  {
    digitalWrite(relayPin, HIGH);    // iniciar riego
    
    delay(timeDelayON);              // mantener riego 10 seg
    
    digitalWrite(relayPin, LOW);     // cortar riego

    time_now = millis();
    
    while(millis() < time_now + timeDelayOFF_corto){
        //esperar aprox. [timeDelayOFF_corto] ms
    }
    Serial.println("Hello");
    i++;
  } 

  time_now = millis();
  while(millis() < time_now + timeDelayOFF_largo){
        //esperar aprox. [timeDelayOFF_largo] ms
    }
}

