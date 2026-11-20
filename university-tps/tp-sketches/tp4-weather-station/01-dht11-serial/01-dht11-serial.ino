// Source: TP4, section 6.1 (DHT11 on Serial Monitor) - ISET Mahdia
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Test DHT11");
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Erreur lecture DHT11 !");
    return;
  }

  Serial.print("Température: ");
  Serial.print(t);
  Serial.print(" °C | Humidité: ");
  Serial.print(h);
  Serial.println(" %");
  delay(2000);
}
