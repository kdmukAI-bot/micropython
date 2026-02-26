#define MICROPY_HW_BOARD_NAME               "Waveshare ESP32-S3-Touch-LCD-3.5B"
#define MICROPY_HW_MCU_NAME                 "ESP32S3"

// Keep UART REPL enabled for bring-up/fallback.
#define MICROPY_HW_ENABLE_UART_REPL         (1)

// Conservative defaults; can be overridden once pinout is finalized.
#define MICROPY_HW_I2C0_SCL                 (9)
#define MICROPY_HW_I2C0_SDA                 (8)
