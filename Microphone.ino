#include <M5Stack.h>
const int Analog = 36; // Berfungsi untuk inisialisasi variabel dari pin analog
const int Digtal = 2; // Berfungsi untuk inisialisasi variabel dari pin digital
void setup() {
  // put your setup code here, to run once:
  M5.begin(); // Berfungsi untuk membuka port data M5 untuk komunikasi serial baik mengirim atau menerima data dari M5. 
  pinMode(Digtal, INPUT_PULLUP); // sebagai pin input atau masukan 
  dacWrite(25, 0); // sebagai pin output
  M5.Lcd.setCursor(100, 0, 4); //berfungsi untuk letak posisi tulisan pada LCD
  M5.Lcd.print("MICROPHONE"); //Output berupa tulisan
}
uint16_t a_data; // suatu konstanta standar, yang didefinisikan dalam stdint.h menginisialisasi a_data
uint16_t d_data; // suatu konstanta standar, yang didefinisikan dalam stdint.h menginisialisasi b_data
void loop() {
  // put your main code here, to run repeatedly:
  a_data = analogRead(Analog); //Untuk membaca data analog
  d_data = digitalRead(Digtal);// untuk membaca data digital
  Serial.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); //Output pada serial yang dicetak 
  M5.Lcd.setCursor(30, 120, 4); // Berfungsi untuk posisi letak tulisan
  M5.Lcd.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); //Output pada serial yang dicetak 
  delay(200); // Untuk durasi waktunya
}
