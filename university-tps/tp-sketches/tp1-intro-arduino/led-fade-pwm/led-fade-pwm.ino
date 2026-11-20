// Source: TP1, Figure 4 (vary LED brightness with PWM) - ISET Mahdia
int led = 9;          // La broche à laquelle la LED est reliée
int brightness = 0;   // L'intensité lumineuse de la LED
int fadeAmount = 5;   // L'ampleur de la variation d'intensité

void setup() {
  // Déclarer la broche 9 comme broche de sortie
  pinMode(led, OUTPUT);
}

void loop() {
  // Modifie la luminosité sur la broche 9
  analogWrite(led, brightness);
  // Change la luminosité pour le prochain passage de boucle
  brightness = brightness + fadeAmount;
  // Inverse le sens de variation en fin de course
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  // Attendre 30 millisecondes pour visualiser l'effet
  delay(30);
}
