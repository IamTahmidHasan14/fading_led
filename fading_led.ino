int brightness = 0;
int FadingAmount = 10;

void setup() {
 pinMode(11,OUTPUT);
}

void loop() {
  analogWrite(11,brightness);
  brightness = brightness + FadingAmount;
  if(brightness == 0 || brightness == 255)
  {
    FadingAmount = - FadingAmount;
    delay(1000); 
  }
}
