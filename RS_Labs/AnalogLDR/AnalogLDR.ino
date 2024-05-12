int ldrPin=A0;
int led0=5;
int buzzer=3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ldrPin,INPUT);
  pinMode(led0,OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 //Serial.attach();
  
  float reading= analogRead(ldrPin);
  Serial.println(reading);
  float out = 0.25*reading;

  if(reading<=40)
  {
    // digitalWrite(led0,HIGH);
    analogWrite(led0,out);
    digitalWrite(buzzer,HIGH);
    
  }
  else if(reading>20)
  {
    // digitalWrite(led0,LOW);
    analogWrite(led0,out);
    digitalWrite(buzzer,LOW);
  }

}
