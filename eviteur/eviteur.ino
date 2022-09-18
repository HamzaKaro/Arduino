const int trigPin = 3;
const int echoPin = 4;
const int in1 = 8;
const int in2 = 9;
const int in3 = 10;
const int in4 = 11;
const int vit1 = 6;
const int vit2 = 7;


void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);
   analogWrite(vit1, 250);
   analogWrite(vit2, 250);
}
long duration, distance;

void loop()
{     
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  if(distance<15)
    {
      digitalWrite(in1, LOW); 
      digitalWrite(in2, HIGH); 
      digitalWrite(in3, HIGH); 
      digitalWrite(in4, LOW);
     
    }
  else
    {
      digitalWrite(in1, HIGH); 
      digitalWrite(in2, LOW); 
      digitalWrite(in3, HIGH); 
      digitalWrite(in4, LOW);
     
    }  
  delay(50);
}
