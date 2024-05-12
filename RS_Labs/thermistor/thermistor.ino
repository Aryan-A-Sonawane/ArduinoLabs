//_aryan_05_05
//NTC thermistor formula: RT =VRT/(VR/R)
//temperaure formula tx=(1/((ln/B)+ (1/t0)));

/*for given thermistor parameters:
4 * RT0:  10 000 Ω
5 * B: 3977 K +- 0.75%
6 * T0:  25 C
7 * +- 5%
8 */
#define rt0 10000
#define B 3977

#define vcc 5
#define r 10000 //resistance applied in series to thermistor

float rt,vr,ln,tx,t0,vrt;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  t0=25+273; //converted to Kelvin

}

void loop() {
  // put your main code here, to run repeatedly:
  
  vrt=analogRead(A0); //analog value of voltage accross thermistor
  vrt=(5.0/1023.0)*vrt; //converted into voltage equivalent

  vr=vcc-vrt ;//voltage accross other resistance = total - vrt
  rt=vrt/(vr/r); // R=V/I (Ohm's law)

  ln=log(rt/rt0);
  tx=(1/((ln/B)+ (1/t0)));

  tx=tx-273.0; //converted back to celcius

  Serial.print(("Temperature:\t"));
  Serial.print(tx);
  Serial.print("C \t");
  Serial.print(tx + 273.0);        //Conversion to Kelvin
  Serial.print("K \t");
  Serial.print((tx * 1.8) + 32);    //Conversion to Fahrenheit
  Serial.println("F");
  delay(500);
}
