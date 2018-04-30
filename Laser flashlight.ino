int light = 10;
int laser = 13;
int sensorPin = A0;
int sensorValue = 0;
void setup() {
  pinMode(light, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue >= 512) {
    digitalWrite(light, LOW); 
    digitalWrite(laser, HIGH); 
  } 
  else if(sensorValue <= 512) {
    digitalWrite(light, HIGH);
    digitalWrite(laser, LOW);
  }

 if(sensorValue >= 768) {
  digitalWrite(light, HIGH);
  delay(300);
  digitalWrite(light, LOW);
  delay(300);
 } 
}
