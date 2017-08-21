//http://saber.patagoniatec.com/sensor-de-flama-ky-026/

int ledPin = 13;
int flameDI = 52;
int flameAI = A0;
int flameValue;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(flameDI, INPUT);
  pinMode(flameAI, INPUT);
}

void loop() {
  digitalWrite(ledPin, LOW);
  flameValue = digitalRead(flameDI);

  if(flameValue == HIGH){
  digitalWrite(ledPin, HIGH);  
  }else{
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
