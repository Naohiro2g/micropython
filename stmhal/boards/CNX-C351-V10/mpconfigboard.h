#define MICROPY_HW_BOARD_NAME       "CNX-C351-V10"
#define MICROPY_HW_MCU_NAME         "STM32F405RG"
#define MICROPY_PY_SYS_PLATFORM     "pyboard"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_SDCARD       (1)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_SPI1      (1)
#define MICROPY_HW_ENABLE_SPI2      (1)
#define MICROPY_HW_ENABLE_SPI3      (0)
#define MICROPY_HW_ENABLE_CAN       (1)

// HSE is 12MHz
#define MICROPY_HW_CLK_PLLM (12)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)

// The board has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1) // TODO check

// UART config TODO check
#define MICROPY_HW_UART1_PORT (GPIOB)
#define MICROPY_HW_UART1_PINS (GPIO_PIN_6 | GPIO_PIN_7)
#define MICROPY_HW_UART2_PORT (GPIOA)
#define MICROPY_HW_UART2_PINS (GPIO_PIN_2 | GPIO_PIN_3)
#define MICROPY_HW_UART2_RTS  (GPIO_PIN_1)
#define MICROPY_HW_UART2_CTS  (GPIO_PIN_0)
#define MICROPY_HW_UART3_PORT (GPIOB)
#define MICROPY_HW_UART3_PINS (GPIO_PIN_10 | GPIO_PIN_11)
#define MICROPY_HW_UART3_RTS  (GPIO_PIN_14)
#define MICROPY_HW_UART3_CTS  (GPIO_PIN_13)
#define MICROPY_HW_UART4_PORT (GPIOA)
#define MICROPY_HW_UART4_PINS (GPIO_PIN_0 | GPIO_PIN_1)
#define MICROPY_HW_UART6_PORT (GPIOC)
#define MICROPY_HW_UART6_PINS (GPIO_PIN_6 | GPIO_PIN_7)

// TODO
#define MICROPY_HW_I2C1_SCL (pin_B6)
#define MICROPY_HW_I2C1_SDA (pin_B7)

// TODO
#define MICROPY_HW_I2C2_SCL (pin_B10)
#define MICROPY_HW_I2C2_SDA (pin_B11)

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// Connexi has 3 LEDs
#define MICROPY_HW_LED1             (pin_A13) // red
#define MICROPY_HW_LED2             (pin_A14) // green
#define MICROPY_HW_LED3             (pin_B2)  // blue
#define MICROPY_HW_LED4             (pin_B2)  // blue
#define MICROPY_HW_LED_OTYPE        (GPIO_MODE_OUTPUT_PP)
#define MICROPY_HW_LED_ON(pin)      (pin->gpio->BSRRL = pin->pin_mask)
#define MICROPY_HW_LED_OFF(pin)     (pin->gpio->BSRRH = pin->pin_mask)

// SD card detect switch
#define MICROPY_HW_SDCARD_DETECT_PIN        (pin_A8)
#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLUP)
#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)

// USB config
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)
