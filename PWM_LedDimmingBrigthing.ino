int ledPin = 9;      // LED connected to digital pin 9
int analogPin = 3;   // potentiometer connected to analog pin 3
int valPWM = 0;         // variable to store the read value
int valPWMmap;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);           //  setup serial
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valPWM = analogRead(analogPin); //read the input analog pin
  valPWMmap = map(valPWM,0,1023,0,255);
  analogWrite(ledPin, valPWMmap);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  Serial.println(valPWMmap);         // debug value
}
