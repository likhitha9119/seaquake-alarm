const int potpin = A0;
const int ledpin = 7;
const int buzzerpin = 3;

void setup(){
  pinMode(ledpin, OUTPUT);
  pinMode(buzzerpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorvalue = analogRead(potpin);
  Serial.println(sensorvalue);
  
  if (sensorvalue > 600) {
    digitalWrite(ledpin, HIGH);
    tone(buzzerpin, 1000);
  } else {
    digitalWrite(ledpin, LOW);
    noTone(buzzerpin);
  }
  delay(200);
}