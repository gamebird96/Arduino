int xAxis=A0;
int yAxis=A1;
int zAxis=A2;
int xVal,yVal,zVal;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  gyroInit();
}

void loop() {
 gyroRead();

}
void gyroInit()
{
    pinMode(xAxis,INPUT);
  pinMode(yAxis,INPUT);
  pinMode(zAxis,INPUT);
  
  }

void gyroRead()
{
   xVal=analogRead(xAxis);
 yVal=analogRead(yAxis);
 zVal=analogRead(zAxis);
 xVal= map(xVal,260,392,0,180);
 yVal= map(yVal,260,392,0,180);
 zVal=map(zVal,260,392,0,180);
  // put your main code here, to run repeatedly:
  Serial.print(xVal);
  Serial.print("     ");
  Serial.print(yVal);
  Serial.print("     ");
  Serial.println(zVal);
  delay(1);
 }
