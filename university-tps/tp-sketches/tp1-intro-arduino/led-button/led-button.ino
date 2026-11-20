// Source: TP1, Figure 6 (control an LED with a push button) - ISET Mahdia
#define PIN_LED 9
#define PIN_BOUTON 2

void setup() {
  pinMode(PIN_LED, OUTPUT);   // Initialise la broche 9 comme sortie
  pinMode(PIN_BOUTON, INPUT); // Initialise la broche 2 comme entrée
}

void loop() {
  // Lecture de l'état du bouton et stockage dans etatBouton
  boolean etatBouton = digitalRead(PIN_BOUTON);

  if (etatBouton == HIGH) { // test si le bouton est appuyé
    digitalWrite(PIN_LED, HIGH);
  }
  else {
    digitalWrite(PIN_LED, LOW);
  }
}
