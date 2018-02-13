/*
Pulse Width Modulation
*===Increasing the Brightness of a LED

*/
int delayTime = 5;

void setup()
{
  pinMode(3,OUTPUT);//Pulse Enabled Pin (~)
}

void loop()
{
  
  //*******Increase brightness with time
for(int i=0; i<256; i++)
{
analogWrite(3,i);
delay(delayTime);
}

//*******Decrease brightness with time
for(int i=255; i>=0; i--)
{
analogWrite(3,i);
delay(delayTime);
}

delay(200);
}
