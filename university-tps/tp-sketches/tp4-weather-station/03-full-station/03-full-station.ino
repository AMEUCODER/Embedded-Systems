// Source: TP4, section 6.3 (DHT11 + LCD + photocell + buzzer) - ISET Mahdia
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN     2
#define DHTTYPE    DHT11
#define LDR_PIN    A0
#define BUZZER_PIN 8

// Seuils (à ajuster selon votre environnement)
#define SEUIL_SOMBRE 300      // en dessous = sombre
#define SEUIL_TEMP    28.0    // au-dessus = trop chaud

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  dht.begin();
  pinMode(LDR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  lcd.setCursor(0, 0);
  lcd.print("Station complete");
  lcd.setCursor(0, 1);
  lcd.print("DHT+LCD+LDR+Buzz");
  delay(1800);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int luminosite = analogRead(LDR_PIN);         // 0 = sombre, 1023 = clair

  if (isnan(h) || isnan(t)) {
    lcd.clear();
    lcd.print("Erreur DHT11");
    delay(2000);
    return;
  }

  // --- Affichage LCD ---
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(t, 1);
  lcd.print("C H:");
  lcd.print(h, 0);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Lum:");
  lcd.print(luminosite);
  if (luminosite < SEUIL_SOMBRE) {
    lcd.print(" SOMBRE");
  } else if (luminosite < 700) {
    lcd.print(" Moyen");
  } else {
    lcd.print(" Clair");
  }

  // --- Alertes buzzer ---
  bool alerte = false;

  // Alerte luminosité trop faible
  if (luminosite < SEUIL_SOMBRE) {
    alerte = true;
  }
  // Alerte température élevée
  if (t > SEUIL_TEMP) {
    alerte = true;
  }

  if (alerte) {
    // Bip court répété
    for (int i = 0; i < 3; i++) {
      digitalWrite(BUZZER_PIN, HIGH);
      delay(120);
      digitalWrite(BUZZER_PIN, LOW);
      delay(80);
    }
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(1800);
}
