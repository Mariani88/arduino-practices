int smokeAIPin = A0;
int smokeDIPin = 22;
int ledPin = 13;

void setup() {
  pinMode(smokeAIPin, INPUT);
  pinMode(smokeDIPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int value = digitalRead(smokeDIPin);
  
  if(value){
    digitalWrite(ledPin, LOW);
  }else{
    digitalWrite(ledPin, HIGH);
  }
  delay(1000);
  
}
