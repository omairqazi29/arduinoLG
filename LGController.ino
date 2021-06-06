int bBangkok = 2;
int bLondon = 3;
int bParis = 4;
int bDubai = 5;
int bTokyo = 6;
int bsBangkok = 0;
int bsLondon = 0;
int bsParis = 0;
int bsDubai = 0;
int bsTokyo = 0;

void setup() {
  Serial.begin(9600);
  pinMode(bBangkok, INPUT);
  pinMode(bLondon, INPUT);
  pinMode(bParis, INPUT);
  pinMode(bDubai, INPUT);
  pinMode(bTokyo, INPUT);
  digitalWrite(bBangkok, HIGH);
  digitalWrite(bLondon, HIGH);
  digitalWrite(bParis, HIGH);
  digitalWrite(bDubai, HIGH);
  digitalWrite(bTokyo, HIGH);
}
void loop() {
  bsBangkok = digitalRead(bBangkok);
  bsLondon = digitalRead(bLondon);
  bsParis = digitalRead(bParis);
  bsDubai = digitalRead(bDubai);
  bsTokyo = digitalRead(bTokyo);
  if (bsBangkok == LOW) {
    Serial.print("Bangkok");
  }
  else if (bsLondon == LOW) {
    Serial.print("London");
  }
  else if (bsParis == LOW) {
    Serial.print("Paris");
  }
  else if (bsDubai == LOW) {
    Serial.print("Dubai");
  }
  else if (bsTokyo == LOW) {
    Serial.print("Tokyo");
  }
  else {
  }
  delay(100);
  Serial.flush();
}
