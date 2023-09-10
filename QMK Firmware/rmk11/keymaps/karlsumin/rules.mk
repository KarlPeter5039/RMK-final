TAP_DANCE_ENABLE = no
RGBLIGHT_ENABLE = no
USE_I2C = yes
MIDI_ENABLE = yes

ENCODER_ENABLE = yes

OLED_ENABLE = yes
OLED_DRIVER = SSD1306 # Selects the right driver
WPM_ENABLE = yes

LTO_ENABLE = yes # Enables Link Time Optimization (LTO) when compiling the keyboard

EXTRAFLAGS += -flto

MOUSEKEY_ENABLE = no
CONSOLE_ENABLE = no