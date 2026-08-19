# Smart Building Security, Access Control and IoT Monitoring System

## Project Overview

The Smart Building Security, Access Control System is an embedded security project based on the LPC2129 ARM7 microcontroller.

The system uses RFID for user authentication and a 4×4 keypad for password-based authentication. UART is used for communication with the RFID reader and for serial monitoring.

A PIR sensor is used to detect motion. The DS1307 RTC is used to maintain the date and time, while an I2C EEPROM is used to store important data and security events.

A 16×2 LCD is used to display the system status and messages to the user. The project combines these modules to provide a simple security and access-control system.

## Components Used

- LPC2129 ARM7 Microcontroller
- RFID Reader
- 4×4 Matrix Keypad
- PIR Motion Sensor
- DS1307 RTC
- I2C EEPROM (AT24C08)
- 16×2 LCD

## Software Used

- Embedded C
- Keil µVision
- Flash Magic

## Build and Run

1. Open the project in Keil µVision.
2. Select the LPC2129 device.
3. Add all required `.c` files.
4. Add `header.h`.
5. Build the project.
6. Program the LPC2129.
7. Connect the UART serial terminal.
8. Test RFID, keypad, PIR, RTC and EEPROM functions.

## Features

- RFID authentication
- Keypad password authentication
- PIR motion detection
- RTC-based timestamping
- EEPROM data storage
- LCD status display
- UART monitoring
- Modular Embedded C drivers

## Team Members

- V25BE8K9	( Kamanuru Hanumanth Reddy )
- V25BE8K10	( Kurakula Roopika )
- V25BE8G2  ( Gaddiala Sravankumar )
