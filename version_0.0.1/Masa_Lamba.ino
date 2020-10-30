int yesilled = 8;
#define pot A0
String readString;
void setup() {
  Serial.begin(9600);
  pinMode(yesilled, OUTPUT); 
}

void loop() {
    int deger = analogRead(pot);
    deger = map(deger,0,1023,0,255);
  while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }
  if (readString.length() >0) {

    Serial.println(readString);
     
    if (readString == "ac")     
    {
    deger = analogRead(pot);
       analogWrite(yesilled, deger);
    }
    else{
       analogWrite(yesilled,0);
           deger = analogRead(pot);

    }  if (readString == "kapa")     
    {    deger = analogRead(pot);

       analogWrite(yesilled, 0);
    }  
    }
      
      Serial.println(deger);
      readString="";
  } 
