int x;
int y;
void setup() {
  
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  analogRead(x);
  analogRead(y);
  analogRead(A0);
  analogRead(A1);
  Serial.begin(9600);

}

void loop() {

Serial.print(x);
Serial.print("   ");
Serial.println(y);
x = analogRead(A0);
y = analogRead(A1);

if(x > 500 && x < 600)
{
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
}
else if(x > 600)
{
  digitalWrite(9,1);
  digitalWrite(10,0);
  digitalWrite(11,0);  
}
else if(x < 450)
{
    digitalWrite(9,0);
    digitalWrite(10,0);
   digitalWrite(11,1);
}


}
