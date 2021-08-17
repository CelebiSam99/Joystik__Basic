const int x_ekseni = A0;
const int y_ekseni = A1;
const int butonPin = 9; 

int x_durum;
int y_durum;
int butonDurum;

void setup() {
Serial.begin(9600);
pinMode(butonPin, INPUT_PULLUP);

}

void loop() {
  x_durum = analogRead(x_ekseni);
  y_durum = analogRead(y_ekseni);
  butonDurum = digitalRead(butonPin);
"                           
  Serial.print("x durumu : ");
  Serial.println(x_durum);
  Serial.print("y durumu : ");
  Serial.println(y_durum);
  Serial.print(" ==>Buton Durum: ");
  Serial.println(butonDurum);
  delay(200);
}
