BACKLIGHT_ENABLE = no
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no          #Don't enable this along with I2C


LTO_ENABLE = yes


BACKLIGHT_SUPPORTED = no      # Disable unsupported hardware
BACKLIGHT_ENABLE = no
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no          #Don't enable this along with I2C


OLED_DRIVER = SSD1306         # Selects the right driver
OLED_ENABLE = yes
WPM_ENABLE = yes


ENCODER_ENABLE = yes
MIDI_ENABLE = yes
EXTRAKEY_ENABLE = yes       # Audio control and System control


SRC += analog.c