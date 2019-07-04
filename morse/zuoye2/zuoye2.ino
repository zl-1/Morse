void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600); 
  digitalWrite(8,HIGH); 
  digitalWrite(7,HIGH);
}
int x=0;
void loop(){
  while(Serial.available()>0){
    x=Serial.read();
    if(x>='0'&&x<='9'){
      x=x-int('0');
      Serial.println(x,DEC);
      go(x);
    }
  }
}

void go(int x){
  if (x&1)
  digitalWrite(2,HIGH);
  else
  digitalWrite(2,LOW);
  if ((x>>1)&1)
  digitalWrite(3,HIGH);
  else
  digitalWrite(3,LOW);
  if ((x>>2)&1)
  digitalWrite(4,HIGH);
  else
  digitalWrite(4,LOW);
  if ((x>>3)&1)
  digitalWrite(5,HIGH);
  else
  digitalWrite(5,LOW);
}
