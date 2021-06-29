#define led1 23
#define led2 22
#define led3 21
#define led4 19
#define sw1 15
#define sw2 2

int sw1State = HIGH;
int sw2State = HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
}

void loop() {
  sw1State = digitalRead(sw1); 
  sw2State = digitalRead(sw2); 
  
  if( sw1State == LOW){
    Serial.println("Switch 1 on");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(200);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(200);
  }else{
     Serial.println("Switch 1 off");
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
  if(sw2State == LOW){
    Serial.println("Switch 2 on");
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(100);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(100);
  }else{
    Serial.println("Switch 2 off");
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
}
