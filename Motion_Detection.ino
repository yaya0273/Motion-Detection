void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(7)==HIGH){
    Serial.print("1");
    delay(10000);
  }
  else{
    Serial.print("0");
    delay(1000);
  }

}
