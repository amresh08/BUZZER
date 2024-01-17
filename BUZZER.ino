#define BUZZER_PIN 9 
int fre[]={1000,4000};
void setup() {
 pinMode(13,OUTPUT);
}

void loop() {
  for(int i=0; i<=1;i++)
  {
  tone(BUZZER_PIN, fre[i]);
  digitalWrite(13,HIGH);
  delay(100);
  noTone(BUZZER_PIN);
  digitalWrite(13,LOW);
  delay(100);
  }
}
