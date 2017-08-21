//http://www.prometec.net/buzzers/

int buzzerPin = 2;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int frequence = 1000;
  int duration = 1000;
  tone(buzzerPin,frequence, duration);
  delay(1000);
  tone(buzzerPin,0,duration);
  delay(1000);
}
