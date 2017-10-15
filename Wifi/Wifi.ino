String command = "";

void setup () {

 Serial1.begin(115200);  
 Serial.begin(115200);
 
}

void loop() {
 
 if(Serial1.available()){
  char c = Serial1.read();
  Serial.print(c);  
 }

 if(Serial.available()){
  char c = Serial.read();
  
  if(c == '#'){
    command = command + "\r\n";
    Serial1.print(command);
    command = "";
  }else{
    command = command + c;
  }
  
  //Serial1.print("AT+CWMODE=3\r\n");
  //Serial1.print("AT+CWLAP\r\n");
  delay(100);
 }
}
