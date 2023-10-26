#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

//#define EXTERNAL_NUM_INTERRUPTS 46
//#define NUM_DIGITAL_PINS 48
//#define NUM_ANALOG_INPUTS 20

//#define analogInputToDigitalPin(p) (((p) < 20) ? (analogChannelToDigitalPin(p)) : -1)
//#define digitalPinToInterrupt(p) (((p) < 48) ? (p) : -1)
//#define digitalPinHasPWM(p) (p < 46)

// The default Wire will be mapped to PMU and RTC
static const uint8_t SDA = 34;
static const uint8_t SCL = 33;

// Default SPI will be mapped to Radio
#define SPI_MOSI (38)
#define SPI_SCK (37)
#define SPI_MISO (39)
#define SPI_CS (36)

#define SDCARD_CS SPI_CS
static const uint8_t SS = SPI_CS;
static const uint8_t MOSI = SPI_MOSI;
static const uint8_t MISO = SPI_MISO;
static const uint8_t SCK = SPI_SCK;


#endif /* Pins_Arduino_h */
