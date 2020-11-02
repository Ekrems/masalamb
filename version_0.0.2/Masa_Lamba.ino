int role = 9;
  String readString;
void setup() {
  Serial.begin(9600);
  pinMode(role, OUTPUT); 
}

void loop() {
 
  while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }
  if (readString.length() >0) {

    Serial.println(readString);
     
    if (readString == "ac")     
    {
  digitalWrite(role, 0);
  }
  if (readString == "kapa")     
    {   
      digitalWrite(role,1);
    }  
    }
      
      readString="";
  } 
