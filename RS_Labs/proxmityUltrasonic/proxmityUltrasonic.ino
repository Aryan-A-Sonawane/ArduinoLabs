//_aryan_05_05
#define trig 2
#define echo A0
#define ledR 3
#define ledY 4
#define ledG 5
#define buzz 6
long time=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=2;i<=6;i++)
  {
    pinMode(i,OUTPUT); 
  }
  digitalWrite(ledR,LOW);
  digitalWrite(ledY,LOW);
  digitalWrite(ledG,LOW);
  digitalWrite(buzz,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //sending out ultrasonic signals through the trigger pin
  digitalWrite(trig,LOW);
  delay(0.002);
  digitalWrite(trig,HIGH);
  delay(0.01);
  digitalWrite(trig,LOW); // 10 microsec to record the time taken by wave to get back
  
  //receiving through the echo pin
  time = pulseIn(echo,HIGH); //time measured in microseconds using pulseIn()
  float distance = (time*0.034)/2; //dist(in cm)=time(in s)* speed(in cm/s) = [(time*10^-6)*34000 ]/2
  Serial.println(distance);

  if(distance<=10)
  {
    digitalWrite(ledR,HIGH);
    digitalWrite(ledY,LOW);
    digitalWrite(ledG,LOW);
    digitalWrite(buzz,HIGH);
  }
  else if(distance<=20)
  {
    digitalWrite(ledY,HIGH);
    digitalWrite(ledR,LOW);
    digitalWrite(ledG,LOW);
    digitalWrite(buzz,LOW);
  }
  else
  {
    digitalWrite(ledR,LOW);
    digitalWrite(ledY,LOW);
    digitalWrite(ledG,HIGH);
    digitalWrite(buzz,LOW);
  }
}
