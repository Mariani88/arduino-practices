void setup () {
 Serial1.begin(115200);  
 Serial.begin(115200);
}

void loop() {
 
 if(Serial1.available()){     //SI EL BUFFER TIENE DATOS ENVIADOS POR EL MODULO WIFI, LOS IMPRIME
  char c = Serial1.read();
  Serial.print(c);  
 }

 if(Serial.available()){         //REALIZA LA LECTURA DEL COMANDO ENVIADO POR CONSOLA
  String command = Serial.readString() + "\r\n";   //PREPARA EL COMANDO PARA SER ENVIADO AL MODULO WIFI
  Serial1.print(command);         //ENVÍA EL COMANDO AL MODULO WIFI
  delay(10);
 }
}
