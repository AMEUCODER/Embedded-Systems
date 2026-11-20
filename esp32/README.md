# ESP32

Experiments on the ESP32. Create one folder per experiment from [`../templates/EXPERIMENT_README.md`](../templates/EXPERIMENT_README.md).

## Learning path

1. `01-hello-esp32/` board setup in the IDE, blink, Serial output
2. `02-wifi-connect/` connect to WiFi and print the IP address
3. `03-web-server/` small web page to control an LED
4. `04-sensors-over-wifi/` read a sensor and show it on a web page
5. `05-mqtt/` publish and subscribe with a broker
6. `06-ble/` Bluetooth Low Energy basics
7. `07-deep-sleep/` low-power operation

## ESP32 reminders

- GPIO levels are 3.3 V, not 5 V.
- Some pins affect boot (for example GPIO 0, 2, 12, 15), so avoid them for early experiments.
- Keep WiFi credentials in `secrets.h` (ignored by git) and commit a `secrets.example.h` instead.
