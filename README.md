📘 STM32F103C6 Learning Projects

This repository contains a collection of beginner to intermediate learning projects using the STM32F103C6 microcontroller (commonly found on the Blue Pill development board). Each project is designed to help understand and master different features of the STM32 microcontroller, STM32CubeIDE, and embedded C programming.

📂 Repository Structure
STM32F103C6-Learning-Projects/
├── 01_GPIO_LedToggle/
├── 02_switch_led/
├── 03_CA_7_Segment/
├── 04_CA_2_digit_7_segment/
├── 05_DC_motor/
├── 06_2switch_2dc_motor/
├── 07_LCD/
├── 08_LCD_4bit/
├── 09_Keypad/
├── 10_UART/
├── 11_UART_Rx/
├── 12_I2C_using_debugger/
├── 13_SPI_using_debugger/
├── 14_ext_interrupt/
├── 15_PWM/
├── 16_PCF8574_LCD_4bit/
├── 103C - pinout
└── README.md

📌 Description
  Each project in this repository focuses on a specific feature or peripheral of the STM32F103C6 microcontroller, including:
      - GPIO: Basic input/output control
      - External Interrupts: Respond to external events like button presses
      - Timers and PWM: Control LED brightness, signal generation
      - ADC: Analog-to-digital conversion for reading sensors like potentiometers
      - UART: Serial communication for debugging or interfacing with PCs
      - I2C / SPI: Communicate with external peripherals like displays and sensors
  
  Each folder contains:
     - Source code and project files (compatible with STM32CubeIDE)
     - Pinout and connection diagrams
     - Explanations in comments for easy understanding

🛠️ Tools and Requirements
    - Microcontroller: STM32F103C6T6 (Blue Pill board)
    - IDE: STM32CubeIDE
    - Programmer: ST-Link V2 or USB-to-Serial (with bootloader)
    - Optional Libraries: HAL (Hardware Abstraction Layer) and CMSIS
    - Basic Electronics: Breadboard, jumper wires, LEDs, resistors, sensors

🚀 Getting Started
    - Clone the repository:
      ```bash
      git clone https://github.com/yourusername/STM32F103C6-Learning-Projects.git
      ```
    - Open a project in STM32CubeIDE.
    - Build and flash the code to your STM32F103C6 board.
    - Connect peripherals as described in the project’s README or comments.

🎯 Goals
    - Learn the basics of embedded systems development.
    - Understand peripheral configuration and usage.
    - Build a strong foundation in STM32 development using STM32CubeIDE.
