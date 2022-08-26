#include <Arduino.h>
int P,Q,R,S;
void setup() // the setup function runs once when you press reset or power the board
{

    pinMode(2,INPUT);//LSB 
    pinMode(3,INPUT);
    pinMode(4,INPUT);//MSB
    pinMode(13,OUTPUT);


}

void loop() // the loop function runs over and over again forever
{
 P= digitalRead(4);
 Q= digitalRead(3);
 R= digitalRead(2);


//&& is the AND operation
// || is the OR operation
// ! is the NOT operation

S= (P||Q||R)&&(P||!Q||!R)&&(!P||Q||R)&&(!P||Q||!R);

if(S==0) 
{
digitalWrite(13,HIGH);}
else 
{digitalWrite(13,LOW);
}
}



