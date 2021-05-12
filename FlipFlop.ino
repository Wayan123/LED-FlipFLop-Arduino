/*
 *  Project : LED Flipflop
 *  By      : Wayan Dadang
 */

#define LedHijau  6  // Definisikan Led Hijau di pin 6
#define LedKuning 7  // Definisikan Led Kuning di pin 7

void setup() {
  // put your setup code here, to run once:

  pinMode(LedHijau, OUTPUT);  // Jadikan pin 6 untuk led hijau mode output agar nanti bisa mengirim logika 1/High
  pinMode(LedKuning, OUTPUT); // Jadikan pin 7 untuk led kuning mode output agar nanti bisa mengirim logika 1/High

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LedHijau, HIGH); // Kirim logika 1/High ke pin 6 led hijau agar lampu menyala
  digitalWrite(LedKuning, LOW); // Kirim logika 0/Low ke pin 7 led kuning agar lampu mati
  delay(300); // Kasih waktu tunda selama 0,3 detik
  digitalWrite(LedHijau, LOW);  // Kirim logika 0/Low pada pin 6 Led hijau agar lampu mati
  digitalWrite(LedKuning, HIGH); // Kirim logoka 1/High pada pin 7 Led Kuning agar lampu nyala
  delay(300); // Kasih waktu tunda lagi selama 0,3 detik

}
