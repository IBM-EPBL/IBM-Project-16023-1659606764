//This is Bala's Assignment

int t=2;
int e=3;

void setup()
{
  Serial.begin(9600);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  //ultrasonic sensor
  digitalWrite(t,LOW);
  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  digitalWrite(t,LOW);
  float dur=pulseIn(e,HIGH);
  float dis=(dur*0.0343)/2;
  Serial.print("Distance is: ");
  Serial.println(dis);

    //LED ON
  if(dis>=100)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
  }

  //ultrasonic Sensor Buzzer
  if(dis>=100)
  {
  for(int i=0; i<=30000; i=i+10)
  {
  tone(12,i);
  delay(1000);
  noTone(12);
  delay(1000);
  }
  }




    //Temperature Sensor
  double a= analogRead(A0);
  double t=(((a/1024)*5)-0.5)*100;
  Serial.print("Temperature Value: ");
  Serial.println(t);
  delay(1000);


  //LED ON
  if(t>=100)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
  }

  //Buzzer for Temperature Sensor
  if(t>=100)
  {
  for(int i=0; i<=30000; i=i+10)
  {
  tone(12,i);
  delay(1000);
  noTone(12);
  delay(1000);
  }
  }

   // LED OFF
  if(t<100)
  {
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
  }
}