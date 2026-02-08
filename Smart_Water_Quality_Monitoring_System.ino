int phSensor = A0;
int turbSensor = A1;
int buzzer = 8;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int phValue = analogRead(phSensor);
  int turbValue = analogRead(turbSensor);

  Serial.print("pH Raw: ");
  Serial.print(phValue);
  Serial.print("  Turbidity Raw: ");
  Serial.println(turbValue);

  if (phValue < 300 || phValue > 700 || turbValue > 600) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}

