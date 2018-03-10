#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Vinson Tech"
#define PRODUCT_NAME "V-Board M4 PoC"
#define VOLUME_LABEL "VM4BOOT"
#define INDEX_URL "http://vtionline.com"
#define BOARD_ID "SAMD51J20A-VTI-v0"

#define USB_VID 0x239A
#define USB_PID 0x0021

#define LED_PIN PIN_PB00
#define LED_TX_PIN PIN_PB01
#define LED_RX_PIN PIN_PB02

// #define BOARD_NEOPIXEL_PIN PIN_PB17
// #define BOARD_NEOPIXEL_COUNT 1

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD2
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA10C_SERCOM0_PAD2
#define BOOT_USART_PAD0                   PINMUX_PA11C_SERCOM0_PAD3
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
