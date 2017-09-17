char data = ' ';

void setup(){
  Serial.begin(9600);
  Serial1.begin(9600);
  delay(1000);
}

void loop(){
  if (Serial1.available()){ 
    data = Serial1.read();
    Serial.print(data);
  }
} 
