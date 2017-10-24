

void setup () {
 Serial1.begin(115200);  
 Serial.begin(115200);
}

void loop() {
  
 if(Serial1.available()){
  char c = Serial1.read();
  Serial.print(c);  
 }
}

