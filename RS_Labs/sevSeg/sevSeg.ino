//_aryan_05_05
//sevSeg 
//g,f,com,a,b
//e,d,com,c,dp
int a=2,b=3,c=4,d=5,e=6,f=7,g=8,dp=9;
//display number 1
void display1(void) 
{
  
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
} 
//display number2
void
  display2(void) 
{
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);

    digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
    digitalWrite(d,HIGH);
}
  
// display number3
void display3(void) 
{ 
    digitalWrite(a,HIGH);

    digitalWrite(b,HIGH);
    
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);

    digitalWrite(g,HIGH);
} 
// display number4
void display4(void) 
{
  
    digitalWrite(f,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);

  digitalWrite(c,HIGH);
  
} 
// display number5
void display5(void)
  
{ 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);

  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
} 
// display number6
void
  display6(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);

    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
  
    digitalWrite(e,HIGH);  
} 
// display number7
void display7(void)
  
{   
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
}
  
// display number8
void display8(void) 
{ 
    digitalWrite(a,HIGH);

    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);

    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);
  
} 
void clearDisplay(void) 
{ 
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);

    digitalWrite(g,LOW);
  digitalWrite(c,LOW);
    digitalWrite(d,LOW);  

    digitalWrite(e,LOW);  
  digitalWrite(f,LOW);  
} 
void display9(void)
  
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);

  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
  digitalWrite(f,HIGH);
  
} 
void display0(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);

  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);
  
  digitalWrite(f,HIGH);  
} 

void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
      while(true) //infinite loop

    {   clearDisplay();
  display0(); 
        delay(2000); 
        clearDisplay();

        display1(); 
        delay(2000); 
        clearDisplay();
        display2();
  
        delay(2000); 
        clearDisplay();
        display3(); 

        delay(2000);
        clearDisplay();
        display4(); 
        delay(2000);

        clearDisplay(); 
        display5(); 
        delay(2000);
        clearDisplay();
  
        display6(); 
        delay(2000);
        clearDisplay(); 

        display7(); 
        delay(2000); 
        clearDisplay();
        display8();
  
        delay(2000); 
        clearDisplay();  
        display9(); 

        delay(2000);      
    }
}
