void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int tico =analogRead(A0);
int clara ;
Serial.println(tico);
if (tico <=100)tico=100;
if (tico >=500)tico=500;
clara = map(tico,100,500,0,255);
analogWrite(9,clara);
delay(1);
}
