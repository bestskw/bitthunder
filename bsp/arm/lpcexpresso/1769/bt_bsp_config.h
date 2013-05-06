/* config.h -- Autogenerated! Do not edit. */

#ifndef _BT_BSP_CONFIG_H_
#define _BT_BSP_CONFIG_H_

/* Architecture-specific options *************************/

#define BT_CONFIG_CONFIGURED 1
#define BT_CONFIG_OS 1
#define BT_CONFIG_HOST_LINUX 1
#define BT_CONFIG_TOOLCHAIN ""
#define BT_CONFIG_ARCH_ARM 1
#define BT_CONFIG_ARCH "arm"
#define BT_CONFIG_LITTLE_ENDIAN 1
#define BT_CONFIG_MACH_LPC11xx 1
#define BT_CONFIG_ARCH_ARM_CORTEX_M0 1
#define BT_CONFIG_ARCH_ARM_FAMILY "armv6-m"
#define BT_CONFIG_MACH_LPC11xx_SYSCLOCK_IRC_FREQ 12000000
#define BT_CONFIG_HAS_CAN_0 1
#define BT_CONFIG_MACH_LPC11Axx 1
#define BT_CONFIG_MACH_LPC11xx_LPC11A04 1
#define BT_CONFIG_MACH_RAM_SIZE 0x2000
#define BT_CONFIG_MACH_FLASH_SIZE 0x8000
#define BT_CONFIG_MACH_LPC11A04 1
#define BT_CONFIG_MACH_LPC11xx_GPIO_BASE 0x50000000
#define BT_CONFIG_MACH_LPC11xx_UART0_BASE 0x40008000
#define BT_CONFIG_MACH_LPC11xx_CAN0_BASE 0x40050000
#define BT_CONFIG_MACH_LPC11xx_TIMER0_BASE 0x4000C000
#define BT_CONFIG_MACH_LPC11xx_TIMER1_BASE 0x40010000
#define BT_CONFIG_MACH_LPC11xx_TIMER2_BASE 0x40014000
#define BT_CONFIG_MACH_LPC11xx_TIMER3_BASE 0x40018000
#define BT_CONFIG_MAX_IRQ 48
#define BT_CONFIG_ARCH_ARM_SYSTICK_SRC0_DIV 2
#define BT_CONFIG_MACH_LPC11xx_CAN_0_INODE_NAME "can0"
#define BT_CONFIG_HAS_PIO0_3 1
#define BT_CONFIG_HAS_PIO0_4 1
#define BT_CONFIG_HAS_PIO0_5 1
#define BT_CONFIG_HAS_PIO0_6 1
#define BT_CONFIG_HAS_PIO0_7 1
#define BT_CONFIG_HAS_PIO1_4 1
#define BT_CONFIG_HAS_PIO1_5 1
#define BT_CONFIG_HAS_PIO1_8 1
#define BT_CONFIG_HAS_PIO1_10 1
#define BT_CONFIG_HAS_PIO1_11 1
#define BT_CONFIG_HAS_PIO3_0 1
#define BT_CONFIG_HAS_PIO3_1 1
#define BT_CONFIG_HAS_PIO3_2 1
#define BT_CONFIG_HAS_PIO3_3 1
#define BT_CONFIG_GPIO_12PIN_PER_PORT 1
#define BT_CONFIG_LPC11xx_PIO0_0_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_1_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_2_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_3_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_4_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_5_FUNCTION 1
#define BT_CONFIG_LPC11xx_PIO0_6_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_7_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_8_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_9_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_10_FUNCTION 0
#define BT_CONFIG_LPC11xx_PIO0_11_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_0_RESET 1
#define BT_CONFIG_LPC11Axx_PIO0_1_GPIO 1
#define BT_CONFIG_LPC11Axx_PIO0_2_GPIO 1
#define BT_CONFIG_LPC11Axx_PIO0_3_GPIO 1
#define BT_CONFIG_LPC11Axx_PIO0_4_GPIO 1
#define BT_CONFIG_LPC11Axx_PIO0_5_GPIO 1
#define BT_CONFIG_LPC11Axx_PIO0_6_TDI 1
#define BT_CONFIG_LPC11Axx_PIO0_7_TMS 1
#define BT_CONFIG_LPC11Axx_PIO0_8_TDO 1
#define BT_CONFIG_LPC11Axx_PIO0_9_TRST 1
#define BT_CONFIG_LPC11Axx_PIO0_10_SWDIO 1
#define BT_CONFIG_LPC11Axx_PIO0_11_GPIO 1
#define BT_CONFIG_LPC11Axx_PIO0_12_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_12_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_15_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_15_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_16_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_16_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_17_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_17_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_18_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_18_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_22_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_22_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_23_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_23_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_24_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_24_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_25_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_25_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_26_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_26_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_27_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_27_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_28_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_28_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_29_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_29_FUNCTION 0
#define BT_CONFIG_LPC11Axx_PIO0_30_GPIO 1
#define BT_CONFIG_LPC11xx_PIO0_30_FUNCTION 0
#define BT_CONFIG_PIO1_0_GPIO 1
#define BT_CONFIG_PIO1_0_FUNCTION 0
#define BT_CONFIG_PIO1_1_GPIO 1
#define BT_CONFIG_PIO1_1_FUNCTION 0
#define BT_CONFIG_PIO1_4_GPIO 1
#define BT_CONFIG_PIO1_4_FUNCTION 0
#define BT_CONFIG_PIO1_8_GPIO 1
#define BT_CONFIG_PIO1_8_FUNCTION 0
#define BT_CONFIG_PIO1_9_GPIO 1
#define BT_CONFIG_PIO1_9_FUNCTION 0
#define BT_CONFIG_PIO1_10_GPIO 1
#define BT_CONFIG_PIO1_10_FUNCTION 0
#define BT_CONFIG_PIO1_14_GPIO 1
#define BT_CONFIG_PIO1_14_FUNCTION 0
#define BT_CONFIG_PIO1_15_GPIO 1
#define BT_CONFIG_PIO1_15_FUNCTION 0
#define BT_CONFIG_PIO1_18_GPIO 1
#define BT_CONFIG_PIO1_18_FUNCTION 0
#define BT_CONFIG_PIO1_19_GPIO 1
#define BT_CONFIG_PIO1_19_FUNCTION 0
#define BT_CONFIG_PIO1_20_GPIO 1
#define BT_CONFIG_PIO1_20_FUNCTION 0
#define BT_CONFIG_PIO1_22_GPIO 1
#define BT_CONFIG_PIO1_22_FUNCTION 0
#define BT_CONFIG_PIO1_23_GPIO 1
#define BT_CONFIG_PIO1_23_FUNCTION 0
#define BT_CONFIG_PIO1_24_GPIO 1
#define BT_CONFIG_PIO1_24_FUNCTION 0
#define BT_CONFIG_PIO1_25_GPIO 1
#define BT_CONFIG_PIO1_25_FUNCTION 0
#define BT_CONFIG_PIO1_26_GPIO 1
#define BT_CONFIG_PIO1_26_FUNCTION 0
#define BT_CONFIG_PIO1_28_GPIO 1
#define BT_CONFIG_PIO1_28_FUNCTION 0
#define BT_CONFIG_PIO1_29_GPIO 1
#define BT_CONFIG_PIO1_29_FUNCTION 0
#define BT_CONFIG_PIO1_30_GPIO 1
#define BT_CONFIG_PIO1_30_FUNCTION 0
#define BT_CONFIG_PIO1_31_GPIO 1
#define BT_CONFIG_PIO1_31_FUNCTION 0
#define BT_CONFIG_MACH_LPC11xx_BOOTLOG_NULL 1
#define BT_CONFIG_SUBARCH "lpc11xx"
#define BT_CONFIG_BSP_ARM_LPCEXPRESSO_LPC11c24 1
#define BT_CONFIG_BSP_DIR "bsp/arm/lpcexpresso/11c24/"
#define BT_CONFIG_BSP_NAME "LPC11c24 Expresso board"
#define BT_CONFIG_MACH_LPC11xx_SYSCLOCK_FREQ 12000000
#define BT_CONFIG_MAINCLK_SRC_IRC 1
#define BT_CONFIG_MAINCLK_SRC 0
#define BT_CONFIG_SYSCLK_CTRL_0 1
#define BT_CONFIG_SYSCLK_CTRL 0
#define BT_CONFIG_PLLCLKK_SRC_IRC 1
#define BT_CONFIG_PLLCLK_SRC 0
#define BT_CONFIG_PLLCLK_CTRL 0
#define BT_CONFIG_WDTCLK_CTRL 20
#define BT_CONFIG_SYSCLK_DIV 3
#define BT_CONFIG_MAX_PROCESS_NAME 10
#define BT_CONFIG_MAX_GPIO_CONTROLLERS 1
#define BT_CONFIG_MAX_INTERRUPT_CONTROLLERS 1
#define BT_CONFIG_LIB_PRINTF 1
#define BT_CONFIG_LIB_PRINTF_SUPPORT_HEX 1
#define BT_CONFIG_KERNEL_FREERTOS 1
#define BT_CONFIG_KERNEL_TICK_RATE 1000
#endif /* _BT_BSP_CONFIG_H_ */
