#include "DigiKeyboard.h"
#ifndef DIGIKEYBOARDFI_H
#define DIGIKEYBOARDFI_H

#define FI_MOD_CONTROL_LEFT  (1<<8)
#define FI_MOD_SHIFT_LEFT    (1<<9)
#define FI_MOD_ALT_LEFT      (1<<10)
#define FI_MOD_GUI_LEFT      (1<<11)
#define FI_MOD_CONTROL_RIGHT (1<<12)
#define FI_MOD_SHIFT_RIGHT   (1<<13)
#define FI_MOD_ALT_RIGHT     (1<<14)
#define FI_MOD_GUI_RIGHT     (1<<15)

#define KEY_ARROW_RIGHT 79
#define KEY_ARROW_UP 82
#define KEY_ARROW_DOWN 81
#define KEY_ARROW_LEFT 80

#define KEY_DELETE 0x4C
#define KEY_BACKSPACE 0x2A

#define KEY_CAPSLOCK 57
#define KEY_NUMLOCK 83
#define KEY_ESC 41
#define KEY_PRINT_SCREEN 70
#define KEY_INSERT 0x49
#define KEY_END 0x4D

#define KEY_MUTE 0x7F
#define KEY_VOLUME_UP 0x80
#define KEY_VOLUME_DOWN 0x81
#define KEY_COPY 0x7C
#define KEY_PASTE 0x7D
#define KEY_CUT 0x7B

#define KEY_F1 0x3A
#define KEY_F2 0x3B
#define KEY_F3 0x3C
#define KEY_F4 0x3D
#define KEY_F5 0x3E
#define KEY_F6 0x3F
#define KEY_F7 0x40
#define KEY_F8 0x41
#define KEY_F9 0x42
#define KEY_F10 0x43
#define KEY_F11 0x44
#define KEY_F12 0x45


#define KEY_FI_A       4
#define KEY_FI_B       5
#define KEY_FI_C       6
#define KEY_FI_D       7
#define KEY_FI_E       8
#define KEY_FI_F       9
#define KEY_FI_G       10
#define KEY_FI_H       11
#define KEY_FI_I       12
#define KEY_FI_J       13
#define KEY_FI_K       14
#define KEY_FI_L       15
#define KEY_FI_M       51
#define KEY_FI_N       17
#define KEY_FI_O       18
#define KEY_FI_P       19
#define KEY_FI_Q       20
#define KEY_FI_R       21
#define KEY_FI_S       22
#define KEY_FI_T       23
#define KEY_FI_U       24
#define KEY_FI_V       25
#define KEY_FI_W       29
#define KEY_FI_X       27
#define KEY_FI_Y       28
#define KEY_FI_Z       26
#define KEY_FI_A2      47 // Å
#define KEY_FI_A3      52 // Ä
#define KEY_FI_O2      51 // Ö

#define KEY_FI_0       98
#define KEY_FI_1       89
#define KEY_FI_2       90
#define KEY_FI_3       91
#define KEY_FI_4       92
#define KEY_FI_5       93
#define KEY_FI_6       94
#define KEY_FI_7       95
#define KEY_FI_8       96
#define KEY_FI_9       97

const uint16_t ascii_to_scan_code_table_fi[] PROGMEM = {
        0x00,                 // NUL
        0x00,                 // SOH
        0x00,                 // STX
        0x00,                 // ETX
        0x00,                 // EOT
        0x00,                 // ENQ
        0x00,                 // ACK
        0x00,                 // BEL
        42,                   // BS Backspace
        43,                   // TAB  Tab
        40,                   // LF Enter
        0x00,                 // VT
        0x00,                 // FF
        0x00,                 // CR
        0x00,                 // SO
        0x00,                 // SI
        0x00,                 // DEL
        0x00,                 // DC1
        0x00,                 // DC2
        0x00,                 // DC3
        0x00,                 // DC4
        0x00,                 // NAK
        0x00,                 // SYN
        0x00,                 // ETB
        0x00,                 // CAN
        0x00,                 // EM
        0x00,                 // SUB
        0x00,                 // ESC
        0x00,                 // FS
        0x00,                 // GS
        0x00,                 // RS
        0x00,                 // US
        44,                   // ' '
        30|FI_MOD_SHIFT_LEFT, // !
        31|FI_MOD_SHIFT_LEFT, // "
        32|FI_MOD_SHIFT_LEFT, // #
        33|FI_MOD_ALT_RIGHT,  // $
        34|FI_MOD_SHIFT_LEFT, // %
        35|FI_MOD_SHIFT_LEFT, // &
        49,                   // '
        37|FI_MOD_SHIFT_LEFT,                   // (
        38|FI_MOD_SHIFT_LEFT,                   // )
        49|FI_MOD_SHIFT_LEFT, // *
        45, // +
        54,                   // ,
        56,                   // -
        55, // .
        36|FI_MOD_SHIFT_LEFT, // /
        39, // 0
        30, // 1
        31, // 2
        32, // 3
        33, // 4
        34, // 5
        35, // 6
        36, // 7
        37, // 8
        38, // 9
        55|FI_MOD_SHIFT_LEFT,                   // :
        54|FI_MOD_SHIFT_LEFT,                   // ;
        100,                  // <
        39|FI_MOD_SHIFT_LEFT,                  // =
        100|FI_MOD_SHIFT_LEFT,// >
        45|FI_MOD_SHIFT_LEFT, // ?
        31|FI_MOD_ALT_RIGHT,  // @
        4|FI_MOD_SHIFT_LEFT,  // A
        5|FI_MOD_SHIFT_LEFT,  // B
        6|FI_MOD_SHIFT_LEFT,  // C
        7|FI_MOD_SHIFT_LEFT,  // D
        8|FI_MOD_SHIFT_LEFT,  // E
        9|FI_MOD_SHIFT_LEFT,  // F
        10|FI_MOD_SHIFT_LEFT, // G
        11|FI_MOD_SHIFT_LEFT, // H
        12|FI_MOD_SHIFT_LEFT, // I
        13|FI_MOD_SHIFT_LEFT, // J
        14|FI_MOD_SHIFT_LEFT, // K
        15|FI_MOD_SHIFT_LEFT, // L
        16|FI_MOD_SHIFT_LEFT, // M
        17|FI_MOD_SHIFT_LEFT, // N
        18|FI_MOD_SHIFT_LEFT, // O
        19|FI_MOD_SHIFT_LEFT, // P
        20|FI_MOD_SHIFT_LEFT, // Q
        21|FI_MOD_SHIFT_LEFT, // R
        22|FI_MOD_SHIFT_LEFT, // S
        23|FI_MOD_SHIFT_LEFT, // T
        24|FI_MOD_SHIFT_LEFT, // U
        25|FI_MOD_SHIFT_LEFT, // V
        26|FI_MOD_SHIFT_LEFT, // W
        27|FI_MOD_SHIFT_LEFT, // X
        28|FI_MOD_SHIFT_LEFT, // Y
        29|FI_MOD_SHIFT_LEFT, // Z
        37|FI_MOD_ALT_RIGHT,  // [
        45|FI_MOD_ALT_RIGHT,  // bslash
        38|FI_MOD_ALT_RIGHT,  // ]
        48|FI_MOD_SHIFT_LEFT, // ^
        56|FI_MOD_SHIFT_LEFT, // _
        46|FI_MOD_SHIFT_LEFT,  // `
        4,                    // a
        5,                    // b
        6,                    // c
        7,                    // d
        8,                    // e
        9,                    // f
        10,                   // g
        11,                   // h
        12,                   // i
        13,                   // j
        14,                   // k
        15,                   // l
        16,                   // m
        17,                   // n
        18,                   // o
        19,                   // p
        20,                   // q
        21,                   // r
        22,                   // s
        23,                   // t
        24,                   // u
        25,                   // v
        26,                   // w
        27,                   // x
        28,                   // y
        29,                   // z
        36|FI_MOD_ALT_RIGHT,  // {
        100|FI_MOD_ALT_RIGHT, // |
        39|FI_MOD_ALT_RIGHT,  // }
        48|FI_MOD_ALT_RIGHT,  // ~
        0,                    // Del
        0x00, 0x00, 0x00, 0x00,
        52|FI_MOD_SHIFT_LEFT, // Ä
        47|FI_MOD_SHIFT_LEFT, // Å
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00,
        51|FI_MOD_SHIFT_LEFT, // Ö
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00,
        52,		      // ä
        47,		      // å
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00,
        51,		      // ö
        0x00,
        };

#undef FI_MOD_CONTROL_LEFT
#undef FI_MOD_SHIFT_LEFT
#undef FI_MOD_ALT_LEFT
#undef FI_MOD_GUI_LEFT
#undef FI_MOD_CONTROL_RIGHT
#undef FI_MOD_SHIFT_RIGHT
#undef FI_MOD_ALT_RIGHT
#undef FI_MOD_GUI_RIGHT

class DigiKeyboardDeviceFi : public DigiKeyboardDevice
{
    public:
    size_t write(uint8_t chr) 
    {
        unsigned int temp = pgm_read_word_near(ascii_to_scan_code_table_fi + chr);
        unsigned char low = temp & 0xFF;
        unsigned char high = (temp >> 8) & 0xFF;
        sendKeyStroke(low, high);
        return 1;
    }
  
    void sendKeyReport(uchar *array,const unsigned int size)
    {
        while (!usbInterruptIsReady()) 
        {
            // Note: We wait until we can send keyPress
            //       so we know the previous keyPress was
            //       sent.
            usbPoll();
            _delay_ms(5);
        }

        usbSetInterrupt(array, size);
    }
};

DigiKeyboardDeviceFi DigiKeyboardFi = DigiKeyboardDeviceFi();

#endif //DIGIKEYBOARDFI_H
