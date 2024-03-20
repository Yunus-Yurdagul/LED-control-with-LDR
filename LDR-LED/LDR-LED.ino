#define LDR A0
#define LED 6

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.println(analogRead(LDR));
  
  if(analogRead(LDR)<45){
    digitalWrite(LED, 1);
  }

  else{
    digitalWrite(LED, 0);
  }
}
