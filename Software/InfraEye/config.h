
// General
//#define TEMPERATURE2CONSOLE   // Debug print of 768 temperatures to console
//#define COLOR2CONSOLE   // Debug print of 768 uint16_t colors to console
#define LIVE_DATA   // defined - sensor data, not defined - static picture

// IR sensor
#define MLX90640_ADR 0x33
#define TA_SHIFT 8 //the default shift for a MLX90640 device in open air
enum RefreshRate
{
	RR0_5Hz,
	RR1Hz,
	RR2Hz,
	RR4Hz,
	RR8Hz,
	RR16Hz,
	RR32Hz,
	RR64Hz
};

// LCD
//#define STMPE_CS 16 // Not used yet
#define TFT_CS   0
#define TFT_DC   2
// #define SD_CS    0 // Not used yet
#define RAW_IMAGE

//



