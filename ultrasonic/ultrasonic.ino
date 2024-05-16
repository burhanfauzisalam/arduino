// Definisikan pin yang digunakan untuk sensor ultrasonik
const int trigPin = 8;
const int echoPin = 9;

// Variabel untuk menyimpan waktu pengiriman dan penerimaan sinyal ultrasonik
long duration;
int distance;

void setup() {
  // Inisialisasi pin sebagai input dan output
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Inisialisasi Serial
  Serial.begin(9600);
}

void loop() {
  // Kirim pulsa ultrasonik
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Baca durasi sinyal yang dikirimkan kembali
  duration = pulseIn(echoPin, HIGH);
  
  // Hitung jarak berdasarkan durasi sinyal
  distance = (duration * 0.034) / 2;
  
  // Tampilkan jarak pada Serial Monitor
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Tunggu sejenak sebelum membaca sensor lagi
  delay(100);
}
