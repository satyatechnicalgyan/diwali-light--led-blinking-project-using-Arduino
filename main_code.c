//Declear Delay time 
int Delay=500;      // Delay 500 miliSecond
int Stop=300;        //Delay 300 miliSecond
int Sleep=50;       //  Delay 50 miliSecond
int satyendra=100;     //Delay 100 miliSecond
int ravi=25;          //Delay 25 miliSecond
int manish=15;          //Delay 15 miliSecond
void setup() {
  // put your setup code here, to run once:

for(int ledPin=2;ledPin<=11;ledPin++)        //declear I/O pin:
{
pinMode(ledPin,OUTPUT);                  //declear ledpin Output
}
}

void loop() {
 // put your main code here, to run repeatedly: 
 
 //Step 1:
 for(int ledPin=2;ledPin<=11;ledPin++)   //Condition
{
  digitalWrite(ledPin,1);                  //Ledpin High
  delay(ravi);            //Delay 25 MiliSecond
   digitalWrite(ledPin,0);                //Ledpin Low
  delay(satyendra);        //Delay 100 MiliSecond
} 
 //Step 2:
for(int ledPin=11;ledPin>=2;ledPin--)
{
  digitalWrite(ledPin,1);                //Ledpin High
  delay(manish);          //Delay 15 MiliSecond
   digitalWrite(ledPin,0);                //Ledpin LOW
  delay(manish);           //Delay 15 MiliSecond
}
 //Step 3:
 for(int ledPin=2;ledPin<=11;ledPin++)
{
  digitalWrite(ledPin,1);                   //Ledpin High
  delay(satyendra);      //Delay 100 MiliSecond
}
 //Step 4:
 for(int ledPin=2;ledPin<=11;ledPin++)
{
  digitalWrite(ledPin,0);                    //Ledpin LOW
  delay(satyendra);         //Delay 100 MiliSecond
}

 //Step 5:
for(int ledPin=11;ledPin>=2;ledPin--)
{
  digitalWrite(ledPin,1);                 //Ledpin High
  delay(satyendra);      //Delay 100 MiliSecond
}
 //Step 6:
for(int ledPin=11;ledPin>=2;ledPin--)
{
  digitalWrite(ledPin,0);                   //Ledpin LOW
  delay(satyendra);         //Delay 100 MiliSecond
}
 //Step 7:
for(int ledPin=2;ledPin<=11;ledPin++)
{
  digitalWrite(ledPin,1);                        //Ledpin High
  delay(Delay);          //Delay 500 MiliSecond
   digitalWrite(ledPin,0);                        //Ledpin LOW
  delay(Delay);           //Delay 500 MiliSecond
}
 //Step 8:
for(int ledPin=11;ledPin>=2;ledPin--)
{
  digitalWrite(ledPin,1);                      //Ledpin High
  delay(Stop);           //Delay 300 MiliSecond
   digitalWrite(ledPin,0);                       //Ledpin LOW
  delay(Stop);            //Delay 300 MiliSecond
}
 //Step 9:
for(int ledPin=2;ledPin<=11;ledPin+=2 )
{
  digitalWrite(ledPin,1);                            //Ledpin High
  delay(Sleep);
   digitalWrite(ledPin,0);                            //Ledpin LOW
  delay(Sleep);
}
 //Step 10:
for(int ledPin=11;ledPin>=3;ledPin-=2 )
{
  digitalWrite(ledPin,1);                              //Ledpin High
  delay(Sleep);
   digitalWrite(ledPin,0);                             //Ledpin LOW
  delay(Sleep);

for(int ledPin=2;ledPin<=11;ledPin+=3)
{
  digitalWrite(ledPin,1);                             //Ledpin High
  delay(satyendra);
   digitalWrite(ledPin,0);                            //Ledpin LOW
  delay(satyendra);
}
 //Step 11:
for(int ledPin=11;ledPin<=2;ledPin-=3)
{
  digitalWrite(ledPin,1);                             //Ledpin High
  delay(satyendra);
   digitalWrite(ledPin,0);                             //Ledpin LOW
  delay(satyendra);
}
 //Step 12:
//LED 10,9,8 oN  With Delay
digitalWrite(ledPin=11,HIGH);
delay(Sleep);
digitalWrite(ledPin=10,HIGH);
delay(Sleep);
digitalWrite(ledPin=9,HIGH);
delay(Sleep);
//LED 11 off and 8 On,10 off and 7 on,9 off and 6 on
digitalWrite(ledPin=11,LOW);
digitalWrite(ledPin=8,HIGH);
delay(Sleep);
digitalWrite(ledPin=10,LOW);
digitalWrite(ledPin=7,HIGH);
delay(Sleep);
digitalWrite(ledPin=9,LOW);
digitalWrite(ledPin=6,HIGH);
delay(Sleep);


digitalWrite(ledPin=8,LOW);
digitalWrite(ledPin=5,HIGH);
delay(Sleep);
digitalWrite(ledPin=7,LOW);
digitalWrite(ledPin=4,HIGH);
delay(Sleep);
digitalWrite(ledPin=6,LOW);
digitalWrite(ledPin=3,HIGH);
delay(Sleep);


digitalWrite(ledPin=5,LOW);
delay(Sleep);
digitalWrite(ledPin=4,LOW);
delay(Sleep);
digitalWrite(ledPin=3,LOW);
delay(Sleep);

  
 //Step 13:
digitalWrite(ledPin=2,HIGH);
delay(ravi);
digitalWrite(ledPin=3,HIGH);
delay(ravi);
digitalWrite(ledPin=4,HIGH);
delay(ravi);

digitalWrite(ledPin=2,LOW);
digitalWrite(ledPin=5,HIGH);
delay(ravi);
digitalWrite(ledPin=3,LOW);
digitalWrite(ledPin=6,HIGH);
delay(ravi);
digitalWrite(ledPin=4,LOW);
digitalWrite(ledPin=7,HIGH);
delay(ravi);

digitalWrite(ledPin=5,LOW);
digitalWrite(ledPin=8,HIGH);
delay(ravi);
digitalWrite(ledPin=6,LOW);
digitalWrite(ledPin=9,HIGH);
delay(ravi);
digitalWrite(ledPin=7,LOW);
digitalWrite(ledPin=10,HIGH);
delay(ravi);


digitalWrite(ledPin=8,LOW);
delay(ravi);
digitalWrite(ledPin=9,LOW);
delay(ravi);
digitalWrite(ledPin=10,LOW);
delay(ravi);

 //Step 14:
//led 1,2,3,4,5 on

digitalWrite(ledPin=2,HIGH);
delay(manish);
digitalWrite(ledPin=3,HIGH);
delay(manish);
digitalWrite(ledPin=4,HIGH);
delay(manish);
digitalWrite(ledPin=5,HIGH);
delay(manish);
digitalWrite(ledPin=6,HIGH);
delay(manish);

 //Step 15:
//led 1,2,3,4,5 off

digitalWrite(ledPin=2,LOW);
delay(manish);
digitalWrite(ledPin=3,LOW);
delay(manish);
digitalWrite(ledPin=4,LOW);
delay(manish);
digitalWrite(ledPin=5,LOW);
delay(manish);
digitalWrite(ledPin=6,LOW);
delay(manish);

 //Step 16:
//led 6,7,8,9,10 on
digitalWrite(ledPin=7,HIGH);
delay(satyendra);
digitalWrite(ledPin=8,HIGH);
delay(satyendra);
digitalWrite(ledPin=9,HIGH);
delay(satyendra);
digitalWrite(ledPin=10,HIGH);
delay(satyendra);
digitalWrite(ledPin=11,HIGH);
delay(satyendra);

 //Step 17:
//led 10,9,8,7,6 off

digitalWrite(ledPin=11,LOW);
delay(satyendra);
digitalWrite(ledPin=10,LOW);
delay(satyendra);
digitalWrite(ledPin=9,LOW);
delay(satyendra);
digitalWrite(ledPin=8,LOW);
delay(satyendra);
digitalWrite(ledPin=7,LOW);
delay(satyendra);

 //Step 18:
for(int ledPin=3;ledPin<=11;ledPin+=5 )
{
  digitalWrite(ledPin,1);
  delay(Sleep);
   digitalWrite(ledPin,0);
  delay(Sleep);

}
 //Step 19:
for(int ledPin=10;ledPin>=2;ledPin-=5 )
{
  digitalWrite(ledPin,1);
  delay(Sleep);
   digitalWrite(ledPin,0);
  delay(Sleep);
}
 //Step 20:
for(int ledPin=4;ledPin<=9;ledPin+=4 )
{
  digitalWrite(ledPin,1);
  delay(Sleep);
   digitalWrite(ledPin,0);
  delay(Sleep);

}
 //Step 21:
for(int ledPin=8;ledPin>=5;ledPin-=3 )
{
  digitalWrite(ledPin,1);
  delay(Sleep);
   digitalWrite(ledPin,0);
  delay(Sleep);
}
 //Step 22
for(int ledPin=6;ledPin<=8;ledPin+=2 )
{
  digitalWrite(ledPin,1);
  delay(Sleep);
   digitalWrite(ledPin,0);
  delay(Sleep);

}
 //Step 23:
for(int ledPin=7;ledPin>=7;ledPin-- )
{
  digitalWrite(ledPin,1);
  delay(Sleep);
   digitalWrite(ledPin,0);
  delay(Sleep);
  
 //Step 24:
for(int ledPin=2;ledPin<=11;ledPin++ )
{
  digitalWrite(ledPin,1);
  delay(Sleep);
   digitalWrite(ledPin,0);
  delay(Sleep);
}
 //Step 25:
//forward999
digitalWrite(ledPin=6,1);
delay(satyendra);
digitalWrite(ledPin=5,1);
digitalWrite(ledPin=7,1);
digitalWrite(ledPin=6,0);
delay(satyendra);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=8,1);
digitalWrite(ledPin=5,0);
digitalWrite(ledPin=7,0);
delay(satyendra);
digitalWrite(ledPin=3,1);
digitalWrite(ledPin=9,1);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=8,0);
delay(satyendra);
digitalWrite(ledPin=2,1);
digitalWrite(ledPin=10,1);
digitalWrite(ledPin=3,0);
digitalWrite(ledPin=9,0);
delay(satyendra);
digitalWrite(ledPin=11,1);
delay(satyendra);
digitalWrite(ledPin=11,0);
delay(satyendra);

 //Step 26:
//reverse66

digitalWrite(ledPin=2,1);
digitalWrite(ledPin=10,1);
delay(satyendra);
digitalWrite(ledPin=2,0);
digitalWrite(ledPin=10,0);
digitalWrite(ledPin=3,1);
digitalWrite(ledPin=9,1);
delay(satyendra);
digitalWrite(ledPin=3,0);
digitalWrite(ledPin=9,0);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=8,1);
delay(satyendra);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=8,0);
digitalWrite(ledPin=5,1);
digitalWrite(ledPin=7,1);
delay(satyendra);
digitalWrite(ledPin=5,0);
digitalWrite(ledPin=7,0);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=6,1);
delay(satyendra);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=6,0);
digitalWrite(ledPin=5,1);
delay(satyendra);
digitalWrite(ledPin=5,0);
delay(satyendra);

digitalWrite(ledPin=6,1);
delay(satyendra);
digitalWrite(ledPin=5,1);
digitalWrite(ledPin=7,1);
delay(satyendra);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=8,1);
delay(satyendra);
digitalWrite(ledPin=3,1);
digitalWrite(ledPin=9,1);
delay(satyendra);
digitalWrite(ledPin=2,1);
digitalWrite(ledPin=10,1);
delay(satyendra);
digitalWrite(ledPin=11,1);
delay(satyendra);

digitalWrite(ledPin=11,0);
delay(satyendra);

 //Step 27:
//reverse000
digitalWrite(ledPin=2,0);
digitalWrite(ledPin=10,0);
delay(satyendra);
digitalWrite(ledPin=3,0);
digitalWrite(ledPin=9,0);
delay(satyendra);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=8,0);
delay(satyendra);
digitalWrite(ledPin=5,0);
digitalWrite(ledPin=7,0);
delay(satyendra);
digitalWrite(ledPin=6,0);
delay(satyendra);

 //Step 27:
//runing22
digitalWrite(ledPin=2,1);
digitalWrite(ledPin=3,1);
delay(satyendra);
digitalWrite(ledPin=2,0);
digitalWrite(ledPin=3,0);
digitalWrite(ledPin=11,1);
digitalWrite(ledPin=10,1);
delay(satyendra);
digitalWrite(ledPin=11,0);
digitalWrite(ledPin=10,0);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=5,1);
delay(satyendra);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=5,0);
digitalWrite(ledPin=8,1);
digitalWrite(ledPin=9,1);
delay(satyendra);
digitalWrite(ledPin=8,0);
digitalWrite(ledPin=9,0);
digitalWrite(ledPin=6,1);
digitalWrite(ledPin=7,1);
delay(satyendra);
digitalWrite(ledPin=6,0);
digitalWrite(ledPin=7,0);
delay(satyendra);

//repeat000
 //Step 28:

digitalWrite(ledPin=6,1);
delay(satyendra);
digitalWrite(ledPin=5,1);
digitalWrite(ledPin=7,1);
digitalWrite(ledPin=6,0);
delay(satyendra);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=8,1);
digitalWrite(ledPin=5,0);
digitalWrite(ledPin=7,0);
delay(satyendra);
digitalWrite(ledPin=3,1);
digitalWrite(ledPin=9,1);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=8,0);
delay(satyendra);
digitalWrite(ledPin=2,1);
digitalWrite(ledPin=10,1);
digitalWrite(ledPin=3,0);
digitalWrite(ledPin=9,0);
delay(satyendra);
digitalWrite(ledPin=11,1);
delay(satyendra);
digitalWrite(ledPin=11,0);
delay(satyendra);

 //Step 29:
//reverse66

digitalWrite(ledPin=2,1);
digitalWrite(ledPin=10,1);
delay(satyendra);
digitalWrite(ledPin=2,0);
digitalWrite(ledPin=10,0);
digitalWrite(ledPin=3,1);
digitalWrite(ledPin=9,1);
delay(satyendra);
digitalWrite(ledPin=3,0);
digitalWrite(ledPin=9,0);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=8,1);
delay(satyendra);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=8,0);
digitalWrite(ledPin=5,1);
digitalWrite(ledPin=7,1);
delay(satyendra);
digitalWrite(ledPin=5,0);
digitalWrite(ledPin=7,0);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=6,1);
delay(satyendra);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=6,0);
digitalWrite(ledPin=5,1);
delay(satyendra);
digitalWrite(ledPin=5,0);
delay(satyendra);

digitalWrite(ledPin=6,1);
delay(satyendra);
digitalWrite(ledPin=5,1);
digitalWrite(ledPin=7,1);
delay(satyendra);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=8,1);
delay(satyendra);
digitalWrite(ledPin=3,1);
digitalWrite(ledPin=9,1);
delay(satyendra);
digitalWrite(ledPin=2,1);
digitalWrite(ledPin=10,1);
delay(satyendra);
digitalWrite(ledPin=11,1);
delay(satyendra);

digitalWrite(ledPin=11,0);
delay(satyendra);

 //Step 31:
//reverse000
digitalWrite(ledPin=2,0);
digitalWrite(ledPin=10,0);
delay(satyendra);
digitalWrite(ledPin=3,0);
digitalWrite(ledPin=9,0);
delay(satyendra);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=8,0);
delay(satyendra);
digitalWrite(ledPin=5,0);
digitalWrite(ledPin=7,0);
delay(satyendra);
digitalWrite(ledPin=6,0);
delay(satyendra);

//runing22
 //Step 33:
digitalWrite(ledPin=2,1);
digitalWrite(ledPin=3,1);
delay(satyendra);
digitalWrite(ledPin=2,0);
digitalWrite(ledPin=3,0);
digitalWrite(ledPin=11,1);
digitalWrite(ledPin=10,1);
delay(satyendra);
digitalWrite(ledPin=11,0);
digitalWrite(ledPin=10,0);
digitalWrite(ledPin=4,1);
digitalWrite(ledPin=5,1);
delay(satyendra);
digitalWrite(ledPin=4,0);
digitalWrite(ledPin=5,0);
digitalWrite(ledPin=8,1);
digitalWrite(ledPin=9,1);
delay(satyendra);
digitalWrite(ledPin=8,0);
digitalWrite(ledPin=9,0);
digitalWrite(ledPin=6,1);
digitalWrite(ledPin=7,1);
delay(satyendra);
digitalWrite(ledPin=6,0);
digitalWrite(ledPin=7,0);
delay(satyendra);

}
}}
