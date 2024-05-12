#define led0 2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led0,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led0,HIGH);
  if(digitalRead(led0==HIGH)) //verification of state on serial monitor
  {
    Serial.print("ON");
  }
  else
  {
    Serial.print("OFF");
  }

  delay(1000);

  digitalWrite(led0,LOW);
  if(digitalRead(led0==HIGH)) //verification of state on serial monitor
  {
    Serial.print("ON");
  }
  else
  {
    Serial.print("OFF");
  }

}
