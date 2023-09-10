# RMK-final
Final iteration of the Reconfigurable Mechanical Keyboard including firmware and PCB files

![Final PCB render](https://i.imgur.com/Q7iEQr8.png)

# Abstract
This project aims to explore new and innovative approaches to keyboard design, with a focus on improving user experience by integrating a modular configuration that can be flexible with user needs. The report begins by introducing our initial design, functionality, and how it improves. Communication between modules is made possible by I2C via TRRS jacks. The report then discusses the development process of this project. This includes hardware and software specifications, ethical aspects, altercations that were made, and discussion of the final design. The last section of this report explores future work or adjustments that could be made to further enhance this project. Overall, this project report demonstrates the value of innovative approaches to keyboard design and highlights the potential for future developments in this field.

![Function Block Diagram](https://i.imgur.com/t29j0BJ.png)

# Introduction
Anyone can go out and buy a keyboard, but most are fixed designs/sizes and lack functions that are desirable to those who need them. With a modular configuration, a reconfigurable keyboard is all-in-one and can scale up or down, depending on the task, at any time. This is achieved through a magnetic connection with detachable data pins between modules. The final project will include the following modules: left hand master, right hand, number row, function row, analog knob input cluster, slide potentiometer cluster, arrow key cluster with OLED display, and the number pad.

While there have been many designs for modular keyboards, nothing out there really comes close to the practicality of our design. It will be different from generic commercial designs by adding additional peripherals including rotary encoders for analog input, a fully modular set up, and dedicated keyboard portions that can be connected and disconnected at any time. 

![Breakdown of inputs/outputs](https://i.imgur.com/nC9bOGa.png)

# Technical Specifications
## Hardware Specifications:
- Elite-C Microcontrollers - ATmega32U4-based processor at 16MHz with 32KB of flash storage, 26 GPIO pins, and tactile reset button
- Diodes - To prevent back-currents in the keyboard matrix
- TRRS jacks - For I2C connection of modules carrying 4 wires
- Pull-up resistors - 4.7k ohm connected from VCC to SDA and SCL for I2C
- 128X32 OLED screen - Display for words per minute count and bongo cat
- Switches - Digital Cherry MX-based Switches
- Slide Potentiometer - Analog slide input for relative positioning input
- Rotary Encoders - Analog rotating potentiometer inputs for absolute positioning input
- Keyboard plate - 3D printed to mechanically support switches
- PCBs - Designed in KiCAD (Figure 4) and ordered from JLCPCB

## Firmware Specifications:
The firmware for a keyboard consists of four primary files: 
- keymap.c: Defines the key mapping of the keyboard
- config.h: Defines the low-level configuration for the keyboard.
- rules.mk: Defines the low-level configuration for the keyboard
- info.json: Defines the physical keyboard layout visually in JavaScript
QMK Firmware was used to configure the keymap, matrix with corresponding rows and columns, and assign keycodes for each of the switches on the keyboard. These files were then flashed to the microcontroller’s memory.

![PCB Schematic view](https://i.imgur.com/BqD4hnJ.png)

On the Arduino Pro Micro/Elite-C, I2C is supported through pins PD1, PD0, GND, and VCC (additional pull-up resistors were required). This connection can be achieved through two 4-pin TRRS jacks with a 3.5mm cable. Most of I2C communication lies in the keyboard firmware in the keymap file (.c), config header file (.h), and the rules file (.mk). The left hand module can function on its own, but without it, the rest of the modules would fail to operate.

![Final PCB design](https://i.imgur.com/NxLz2rQ.png)

# Future Work
We chose to take a simplified approach to our original project plan due to potential hardware address limitations in QMK for 8 modules. We concluded that it would be better to have a couple working modules as opposed to 8 non-working ones. For our final keyboard, we cut the modules to just a left and right half but still included an OLED screen, digital switches, slide potentiometer, and rotary encoders. For future works, this keyboard can potentially expand to our initial goal of the 8 modules specified.
Additionally, to manufacture this keyboard on a larger scale, we have the following design altercations in mind: Breaking away from the Breakout Board, ISP (In-System Programming), Independent Molex/USB/Aviator connection, and LED indicators for boot status/flashing.
Breaking away from the Breakout Board: It is far easier and cheaper to mass produce the PCB without the Arduino/Elite-C breakout boards that house the ATMega32U4 microprocessor. SMD components would be used with an on-board clock at 16MHz, capacitors for phase inversion, and bypass capacitors between Vcc and GND to reduce switching noise.
ISP (In-System Programming): This allows quick flashing of the device with firmware without a direct USB connection. This is ideal in a factory environment where it’s impractical to plug each freshly soldered PCB with a USB connection. Instead, a 6 pin ISP connection will be mounted on the board for device access.
Independent Molex/USB/Aviator connection: This is required when eliminating the breakout board. D+ and D- data connections will be soldered to the connectors to further streamline production and reduce costs at a larger scale.
LED indicators for boot status/flashing: A two LED setup will be used for when the keyboard’s memory is being wiped and when the keyboard is successfully and continuously connected with no errors. This will add two additional resistors for each LED.

![Flashing the device](https://i.imgur.com/SnhBrNZ.png)

# Acknowledgements
Thank you to Professor Khazaei, Professor Cutitaru, Professor Norian, Ted Bowen, Xiyuan, and Kelly Zona for their help, feedback, and guidance for this project throughout the course of the year.

![Additional render](https://i.imgur.com/dRd8EIC.png)

This is a completed project with no intentions to add or revise. If you have any questions or comments, you can reach me at karlpeteryu@gmail.com

![Keyboard layout in use](https://i.imgur.com/cGYRn9Q.jpg)

# References
“Designing F13 WKL Tkl Keyboard in Fusion 360”, Zlane - YouTube.com
https://www.youtube.com/watch?v=pvVdCHGJLY4

“A modern handwiring guide - stronger, cleaner, easier”, cribbit - geekhack.com
https://geekhack.org/index.php?topic=87689.0

“Building a Split Keyboard part 2”, Mark Story - mark-story.com
https://mark-story.com/posts/view/building-a-split-keyboard-part-2

“Rotary Encoder + Button Keyboard Output (Arduino Pro Micro)”, dkgrieshammer - Github
https://gist.github.com/dkgrieshammer/66cce6ec92a6427c16804df84c22cc83

“Adding SSD1306 OLED display to your build”, u/ishtob - Reddit
https://www.reddit.com/r/olkb/comments/5zy7og/adding_ssd1306_oled_display_to_your_build/

“Pheromone Keyboard”, luantty2 - Github
https://github.com/luantty2/pheromone_keyboard

“I2C Wiring for Splits”, u/VexillaVexme - Reddit
https://www.reddit.com/r/ErgoMechKeyboards/comments/k4x0a7/i2c_wiring_for_splits/

“A Complete Guide to Building a Hand-Wired Keyboard”, Ben Chapman - crackedthecode.com
https://www.crackedthecode.co/a-complete-guide-to-building-a-hand-wired-keyboard/#hardware-needed

“QMK Feature Options”, QMK group - docs.qmk.fm
https://docs.qmk.fm/#/config_options?id=feature-options

“Lily58 project”, F_YUUCHI - Ortholinear column-staggeredの分割キーボード
https://kata0510.github.io/Lily58-Document/

“Litl keyboard”, mohoyt - Github
https://github.com/mohoyt/litl

