int trig=9;
int echo=10;

int data=0;
int distance=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  digitalWrite(trig,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  data=pulseIn(echo,HIGH);
  distance=data*0.034/2;
  Serial.print("Distance=");
  Serial.println(distance);
  delay(250);
}
