const int ledPin = 13;
const int btnPin =2;
int buttonState=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(btnPin,INPUT);
  digitalWrite(btnPin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState=digitalRead(btnPin);
if(buttonState==HIGH){
  digitalWrite(ledPin,HIGH);
}
else{
  digitalWrite(ledPin,LOW);
  
  }
}
