# Embedded-Systems

My learning journey in embedded systems: Arduino, ESP32, sensors, actuators and robotics projects, started from zero after joining the ISET robotics club.

This repo is a record of what I build and what I learn. Every experiment has its own folder with the code, a wiring table, and notes on what went wrong.

## Repository structure

```
Embedded-Systems/
├── arduino/            # Arduino Uno experiments (basics, sensors, actuators)
├── esp32/              # ESP32: WiFi, web server, MQTT, BLE, deep sleep
├── projects/           # Bigger builds that combine several skills
├── university-tps/     # Lab sheets (TPs) from ISET Mahdia
├── notes/              # Pinouts, wiring mistakes, datasheet takeaways
└── templates/          # README template for a new experiment
```

## Hardware I use

| Board / part | Status |
| --- | --- |
| Arduino Uno | used in the university TPs |
| ESP32 DevKit | to confirm |
| Sensors (HC-SR04, DHT11, photocell) | used in TP3 and TP4 |
| LCD 16x2 I2C | used in TP3 and TP4 |

Update this table as you get new parts.

## Learning roadmap

- [ ] Arduino IDE setup, blink, LEDs and push buttons (TP1)
- [ ] External interrupts (TP2)
- [ ] Ultrasonic sensor and I2C LCD (TP3)
- [ ] DHT11, photocell and buzzer alerts (TP4)
- [ ] `millis()` instead of `delay()` (non-blocking code)
- [ ] PWM and analog sensors
- [ ] Motors and drivers: servo, DC motor with H-bridge, stepper
- [ ] ESP32: WiFi, small web server
- [ ] ESP32: MQTT and BLE
- [ ] First combined project (line follower or WiFi-controlled car)

## How each experiment is documented

Every experiment folder follows [`templates/EXPERIMENT_README.md`](templates/EXPERIMENT_README.md): goal, parts, pin table, wiring photo or diagram, what I changed from the example, and what went wrong.

## Tools

- Arduino IDE (PlatformIO in VS Code once the projects grow)
- Libraries are listed in each experiment's README

## License

MIT, see [LICENSE](LICENSE).
