int ledPinR=13;
int ledPinG=12;
int ledPinB=11;
  
  void setup() {

  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int adcValue;
  
  adcValue=analogRead(A0);
  analogWrite(ledPinR, map(adcValue, 0, 1023, 0, 255));

  adcValue=analogRead(A1);
  analogWrite(ledPinG, map(adcValue, 0, 1023, 0, 255));

  adcValue=analogRead(A2);
  analogWrite(ledPinB, map(adcValue, 0, 1023, 0, 255));

}
