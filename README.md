<img src="https://content.arduino.cc/website/Arduino_logo_teal.svg" height="100" align="right" />

# WiFi

[![License](https://img.shields.io/github/license/arduino-libraries/WiFi)](https://support.arduino.cc/hc/en-us/articles/360018434279-I-have-used-Arduino-for-my-project-do-I-need-to-release-my-source-code-)

This library is the generic WiFi library for any Arduino and Arduino-compatible board. It is a thin wrapper around the various platform-specific WiFi implementations that allows you to include just "WiFi.h" in your sketch without worrying about the exact WiFi library to include for each specific platform. With this approach you don't need to write conditional inclusions yourself, as this library will take care of that.

Using this library in sketches and other libraries is the **recommended way** to use WiFi as it ensures the maximum code portability.

This library imports the right library automatically:

| Boards | Underlying library |
|--|--|
| UNO R4 boards | [Renesas/WiFiS3](https://github.com/arduino/ArduinoCore-renesas/tree/main/libraries/WiFiS3) |
| NINA-based boards<br />(MKR WiFi 1010, Nano 33 IoT, Nano RP2040 Connect etc.) | [WiFiNINA](https://github.com/arduino-libraries/WiFiNINA) |
| Portenta Mbed boards | [MBed/WiFi](https://github.com/arduino/ArduinoCore-mbed/tree/master/libraries/WiFi) |
| Portenta Renesas boards | [Renesas/WiFi](https://github.com/arduino/ArduinoCore-renesas/tree/main/libraries/WiFi) |
| ESP8266 boards | [ESP8266WiFi](https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi) |
| ESP32 boards | [ESP32/WiFi](https://github.com/espressif/arduino-esp32/tree/master/libraries/WiFi) |

See the examples shipped with such libraries to learn more about using WiFi functionality. These WiFi implementations share most of their API, so good chances are your sketch or library will be truly platform-agnostic.

(If you're looking for the library to use for the retired Arduino WiFi Shield, it's now called [Arduino_WiFiShield](https://github.com/arduino-libraries/Arduino_WiFiShield).)

## Usage

```c++
#include <WiFi.h>

void setup() {
    WiFi.begin("your-ssid", "your-password");
}
```

## 🔎 Resources

* [How to install a library](https://www.arduino.cc/en/guide/libraries)
* [Help Center](https://support.arduino.cc/)
* [Forum](https://forum.arduino.cc)