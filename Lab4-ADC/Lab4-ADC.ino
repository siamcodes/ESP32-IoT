
const int analogIn1 = 12;
const int analogIn2 = 34;
int sensorValue1 = 0;
int sensorValue2 = 0;
const int led1 = 23;
const int led2 = 22;
int adc1 = 0;
int adc2 = 0;

void setup() {
 Serial.begin(9600);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
}

void loop() {
  sensorValue1 = analogRead(analogIn1);
  sensorValue2 = analogRead(analogIn2);
  adc1 = sensorValue1;
  adc2 = sensorValue2;

 
  Serial.println(adc1);
  digitalWrite(led1, HIGH);
  delay(adc1);
  digitalWrite(led1, LOW);
  delay(adc1);

  for(int i=0; adc2>i ; adc2-=10){
  Serial.println(adc2); 
  digitalWrite(led2, HIGH);
  delay(adc2);
  digitalWrite(led2, LOW);
  delay(adc2);
  }
  
}
