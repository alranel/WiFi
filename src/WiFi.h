#pragma once

#if defined(ARDUINO_SAMD_MKRWIFI1010) || defined(ARDUINO_SAMD_NANO_33_IOT) || \
    defined(ARDUINO_AVR_UNO_WIFI_REV2) || defined (ARDUINO_NANO_RP2040_CONNECT)
  #include <WiFiNINA.h>
#elif defined(ARDUINO_AVR_UNO)
  #error "The WiFi library for the WiFi Shield was renamed to Arduino_WiFiShield. In order to compile your sketch you'll need to install that one and change the #include line in your code."
#elif defined(ARDUINO_ARCH_ESP8266)
  #include <ESP8266WiFi.h>
#else
  #error "No WiFi library known for this board."
#endif
