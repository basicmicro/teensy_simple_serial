void setup() {
  Serial1.begin(38400);
}

void loop() {
  //Turn motor1 forward at half speed
  Serial1.write(94);
  delay(2000);
  //Stop motor1
  Serial1.write(64);
  delay(2000);
  //Turn motor1 backwards at half speed
  Serial1.write(32);
  delay(2000);
  //Stop motor1
  Serial1.write(64);
  delay(2000);

}
