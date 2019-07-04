#include <Morse.h>

void setup() 
{
  Serial.begin(9600);

}

void loop() 
{
  String comdata="";
  int i=0;
  int n=0;
  while(Serial.available()>0)
  {
    comdata+=char(Serial.read());
    }
   n=comdata.length();
    if(n>0)
    {
      for(i=0;i<n;i++)
      {
        switch(comdata[i])
        {
           case 'a':
            dot();
            dash();
            break;
           case 'b':
            dash();
            dot();
            dot();
            dot();
            break;
           case'c':
            dash();
            dot();
            dash();
            dot();
            break;
           case'd':
            dash();
            dot();
            dot();
            break;
           case'e':
            dot();
            break;
           case'f':
            dot();
            dot();
            dash();
            dot();
            break;
           case'g':
            dash();
            dash();
            dot();
            break;
           case'h':
            dot();
            dot();
            dot();
            dot();
            break;
           case'i':
            dot();
            dot();
            break;
           case'j':
            dot();
            dash();
            dash();
            dash();
            break;
          }
        
        }
      }
  // put your main code here, to run repeatedly:

}
