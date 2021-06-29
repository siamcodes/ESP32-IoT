const int led1 = 23;
const int led2 = 22;


void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  if(Serial.available() > 0 ){
    int inRead = Serial.read();  //อ่านค่าจาก Serial Monitor
    
    if(inRead == '1'){
      digitalWrite(led1, HIGH);
      Serial.println("LED1 ON");
    }else{
      digitalWrite(led1, LOW);
      Serial.println("LED1 OFF");
    } 

    if(inRead == 'a'){
      digitalWrite(led2, HIGH);
      Serial.println("LED2 ON");
    }else{
      digitalWrite(led2, LOW);
      Serial.println("LED2 OFF");
    } 
  }
 
  delay(1000);
}
