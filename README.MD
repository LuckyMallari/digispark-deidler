# DigiSpark De-Idler
_Simulates USB Keyboard and sends keystrokes_

### DigiSpark Setup and Instructions
* Instructions - http://digistump.com/wiki/digispark/tutorials/connecting
* Hardware - http://digistump.com/products/1

### Configuration
* KEY_TO_SEND - _what key to send_
* INTERVAL_MS - interval in milliseconds to send the key
* IS_SEND_TWICE - if defined, the key is sent twice, with a second delay in between
 
#### Keys
```
KEY_NOKEY             0x00     // Reserved (no event indicated)
KEY_ERR_ROLLOVER      0x01     // Keyboard ErrorRollOver
KEY_POSTFAIL          0x02     // Keyboard POSTFail
KEY_ERR_UNDEFINED     0x03     // Keyboard ErrorUndefined
KEY_A                 0x04     // Keyboard a and A
KEY_B                 0x05     // Keyboard b and B
KEY_C                 0x06     // Keyboard c and C
KEY_D                 0x07     // Keyboard d and D
KEY_E                 0x08     // Keyboard e and E
KEY_F                 0x09     // Keyboard f and F
KEY_G                 0x0A     // Keyboard g and G
KEY_H                 0x0B     // Keyboard h and H
KEY_I                 0x0C     // Keyboard i and I
KEY_J                 0x0D     // Keyboard j and J
KEY_K                 0x0E     // Keyboard k and K
KEY_L                 0x0F     // Keyboard l and L
KEY_M                 0x10     // Keyboard m and M
KEY_N                 0x11     // Keyboard n and N
KEY_O                 0x12     // Keyboard o and O
KEY_P                 0x13     // Keyboard p and P
KEY_Q                 0x14     // Keyboard q and Q
KEY_R                 0x15     // Keyboard r and R
KEY_S                 0x16     // Keyboard s and S
KEY_T                 0x17     // Keyboard t and T
KEY_U                 0x18     // Keyboard u and U
KEY_V                 0x19     // Keyboard v and V
KEY_W                 0x1A     // Keyboard w and W
KEY_X                 0x1B     // Keyboard x and X
KEY_Y                 0x1C     // Keyboard y and Y
KEY_Z                 0x1D     // Keyboard z and Z
KEY_1                 0x1E     // Keyboard 1 and !
KEY_2                 0x1F     // Keyboard 2 and
KEY_3                 0x20     // Keyboard 3 and #
KEY_4                 0x21     // Keyboard 4 and $
KEY_5                 0x22     // Keyboard 5 and %
KEY_6                 0x23     // Keyboard 6 and ^
KEY_7                 0x24     // Keyboard 7 and &
KEY_8                 0x25     // Keyboard 8 and *
KEY_9                 0x26     // Keyboard 9 and (
KEY_0                 0x27     // Keyboard 0 and )
KEY_ENTER             0x28     // Keyboard Return (ENTER)
KEY_ESCAPE            0x29     // Keyboard ESCAPE
KEY_DELETE            0x2A     // Keyboard DELETE (Backspace)
KEY_TAB               0x2B     // Keyboard Tab
KEY_SPACE             0x2C     // Keyboard Spacebar
KEY_MINUS             0x2D     // Keyboard - and (underscore)
KEY_EQUAL             0x2E     // Keyboard = and +
KEY_L_BRACKET         0x2F     // Keyboard [ and {
KEY_R_BRACKET         0x30     // Keyboard ] and }
KEY_BACKSLASH         0x31     // Keyboard \ and |
KEY_HASH              0x32     // Keyboard Non-US # and ~
KEY_SEMICOLON         0x33     // Keyboard ; and :
KEY_APOSTROPHE        0x34     // Keyboard â€˜ and â€œ
KEY_GRAVE             0x35     // Keyboard Grave Accent and Tilde
KEY_COMMA             0x36     // Keyboard , and <
KEY_DOT               0x37     // Keyboard . and >
KEY_SLASH             0x38     // Keyboard / and ?
KEY_CAPS_LOCK         0x39     // Keyboard Caps Lock
KEY_F1                0x3A     // Keyboard F1
KEY_F2                0x3B     // Keyboard F2
KEY_F3                0x3C     // Keyboard F3
KEY_F4                0x3D     // Keyboard F4
KEY_F5                0x3E     // Keyboard F5
KEY_F6                0x3F     // Keyboard F6
KEY_F7                0x40     // Keyboard F7
KEY_F8                0x41     // Keyboard F8
KEY_F9                0x42     // Keyboard F9
KEY_F10               0x43     // Keyboard F10
KEY_F11               0x44     // Keyboard F11
KEY_F12               0x45     // Keyboard F12
KEY_PRTSCN            0x46     // Keyboard PrintScreen
KEY_SCR_LOCK          0x47     // Keyboard Scroll Lock
KEY_PAUSE             0x48     // Keyboard Pause
KEY_INSERT            0x49     // Keyboard Insert
KEY_HOME              0x4A     // Keyboard Home
KEY_PAGE_UP           0x4B     // Keyboard PageUp
KEY_DELETE            0x4C     // Keyboard Delete Forward
KEY_END               0x4D     // Keyboard End
KEY_PAGE_DOWN         0x4E     // Keyboard PageDown
KEY_ARROW_RIGHT       0x4F     // Keyboard RightArrow
KEY_ARROW_LEFT        0x50     // Keyboard LeftArrow
KEY_ARROW_DOWN        0x51     // Keyboard DownArrow
KEY_ARROW_UP          0x52     // Keyboard UpArrow
KEY_RIGHT_ARROW       0x4F     // Keyboard RightArrow  -> Alternative arrow keys names
KEY_LEFT_ARROW        0x50     // Keyboard LeftArrow
KEY_DOWN_ARROW        0x51     // Keyboard DownArrow
KEY_UP_ARROW          0x52     // Keyboard UpArrow
KEY_NUM_LOCK          0x53     // Keypad Num Lock and Clear
KEY_KPAD_SLASH        0x54     // Keypad /
KEY_KPAD_TIMES        0x55     // Keypad *
KEY_KPAD_MINUS        0x56     // Keypad -
KEY_KPAD_PLUS         0x57     // Keypad +
KEY_KPAD_ENTER        0x58     // Keypad ENTER
KEY_KPAD_1            0x59     // Keypad 1 and End
KEY_KPAD_2            0x5A     // Keypad 2 and Down Arrow
KEY_KPAD_3            0x5B     // Keypad 3 and PageDn
KEY_KPAD_4            0x5C     // Keypad 4 and Left Arrow
KEY_KPAD_5            0x5D     // Keypad 5
KEY_KPAD_6            0x5E     // Keypad 6 and Right Arrow
KEY_KPAD_7            0x5F     // Keypad 7 and Home
KEY_KPAD_8            0x60     // Keypad 8 and Up Arrow
KEY_KPAD_9            0x61     // Keypad 9 and PageUp
KEY_KPAD_0            0x62     // Keypad 0 and Insert
KEY_KPAD_DOT          0x63     // Keypad . and Delete
KEY_INTL_BACKSLASH    0x64     // Keyboard Non-US \ and |
KEY_APPLICATION       0x65     // Keyboard Application
KEY_POWER             0x66     // Keyboard Power
KEY_KPAD_EQUAL        0x67     // Keypad =
KEY_F13               0x68     // Keyboard F13
KEY_F14               0x69     // Keyboard F14
KEY_F15               0x6A     // Keyboard F15
KEY_F16               0x6B     // Keyboard F16
KEY_F17               0x6C     // Keyboard F17
KEY_F18               0x6D     // Keyboard F18
KEY_F19               0x6E     // Keyboard F19
KEY_F20               0x6F     // Keyboard F20
KEY_F21               0x70     // Keyboard F21
KEY_F22               0x71     // Keyboard F22
KEY_F23               0x72     // Keyboard F23
KEY_F24               0x73     // Keyboard F24
KEY_EXECUTE           0x74     // Keyboard Execute
KEY_HELP              0x75     // Keyboard Help
KEY_MENU              0x76     // Keyboard Menu
KEY_SELECT            0x77     // Keyboard Select
KEY_STOP              0x78     // Keyboard Stop
KEY_AGAIN             0x79     // Keyboard Again
KEY_UNDO              0x7A     // Keyboard Undo
KEY_CUT               0x7B     // Keyboard Cut
KEY_COPY              0x7C     // Keyboard Copy
KEY_PASTE             0x7D     // Keyboard Paste
KEY_FIND              0x7E     // Keyboard Find
KEY_MUTE              0x7F     // Keyboard Mute
KEY_VOLUME_UP         0x80     // Keyboard Volume Up
KEY_VOLUME_DOWN       0x81     // Keyboard Volume Down
KEY_LOCK_CAPS_LOCK    0x82     // Keyboard Locking Caps Lock
KEY_LOCK_NUM_LOCK     0x83     // Keyboard Locking Num Lock
KEY_LOCK_SCR_LOCK     0x84     // Keyboard Locking Scroll Lock
KEY_KPAD_COMMA        0x85     // Keypad Comma
KEY_EQUAL_SIGN        0x86     // Keypad Equal Sign
KEY_INTL1             0x87     // Keyboard International1
KEY_INTL2             0x88     // Keyboard International2
KEY_INTL3             0x89     // Keyboard International3
KEY_INTL4             0x8A     // Keyboard International4
KEY_INTL5             0x8B     // Keyboard International5
KEY_INTL6             0x8C     // Keyboard International6
KEY_INTL7             0x8D     // Keyboard International7
KEY_INTL8             0x8E     // Keyboard International8
KEY_INTL9             0x8F     // Keyboard International9
KEY_LANG1             0x90     // Keyboard LANG1
KEY_LANG2             0x91     // Keyboard LANG2
KEY_LANG3             0x92     // Keyboard LANG3
KEY_LANG4             0x93     // Keyboard LANG4
KEY_LANG5             0x94     // Keyboard LANG5
KEY_LANG6             0x95     // Keyboard LANG6
KEY_LANG7             0x96     // Keyboard LANG7
KEY_LANG8             0x97     // Keyboard LANG8
KEY_LANG9             0x98     // Keyboard LANG9
KEY_ALT_ERASE         0x99     // Keyboard Alternate Erase
KEY_SYSREQ            0x9A     // Keyboard SysReq/Attention
KEY_CANCEL            0x9B     // Keyboard Cancel
KEY_CLEAR             0x9C     // Keyboard Clear
KEY_PRIOR             0x9D     // Keyboard Prior
KEY_RETURN            0x9E     // Keyboard Return
KEY_SEPARATOR         0x9F     // Keyboard Separator
KEY_OUT               0xA0     // Keyboard Out
KEY_OPER              0xA1     // Keyboard Oper
KEY_CLEAR             0xA2     // Keyboard Clear/Again
KEY_CRSEL             0xA3     // Keyboard CrSel/Props
KEY_EXSEL             0xA4     // Keyboard ExSel
KEY_KPAD_00           0xB0     // Keypad 00
KEY_KPAD_000          0xB1     // Keypad 000
KEY_THOUSANDS_SEP     0xB2     // Thousands Separator
KEY_DECIMAL_SEP       0xB3     // Decimal Separator
KEY_CURRENCY          0xB4     // Currency Unit
KEY_SUB_CURRENCY      0xB5     // Currency Sub-unit
KEY_KPAD_LEFT_PAREN   0xB6     // Keypad (
KEY_KPAD_RIGHT_PAREN  0xB7     // Keypad )
KEY_KPAD_LEFT_BRACE   0xB8     // Keypad {
KEY_KPAD_RIGHT_BRACE  0xB9     // Keypad }
KEY_KPAD_TAB          0xBA     // Keypad Tab
KEY_KPAD_BACKSPACE    0xBB     // Keypad Backspace
KEY_KPAD_A            0xBC     // Keypad A
KEY_KPAD_B            0xBD     // Keypad B
KEY_KPAD_C            0xBE     // Keypad C
KEY_KPAD_D            0xBF     // Keypad D
KEY_KPAD_E            0xC0     // Keypad E
KEY_KPAD_F            0xC1     // Keypad F
KEY_KPAD_XOR          0xC2     // Keypad XOR
KEY_KPAD_CARET        0xC3     // Keypad ^
KEY_KPAD_PERCENT      0xC4     // Keypad %
KEY_KPAD_LESS_THAN    0xC5     // Keypad <
KEY_KPAD_GREAT_THAN   0xC6     // Keypad >
KEY_KPAD_AND          0xC7     // Keypad &
KEY_KPAD_DBL_AND      0xC8     // Keypad &&
KEY_KPAD_OR           0xC9     // Keypad |
KEY_KPAD_DBL_OR       0xCA     // Keypad ||
KEY_KPAD_COLON        0xCB     // Keypad :
KEY_KPAD_HASH         0xCC     // Keypad #
KEY_KPAD_SPACE        0xCD     // Keypad Space
KEY_KPAD_AT           0xCE     // Keypad @
KEY_KPAD_EXCLAMATION  0xCF     // Keypad !
KEY_KPAD_MEM_STORE    0xD0     // Keypad Memory Store
KEY_KPAD_MEM_RECALL   0xD1     // Keypad Memory Recall
KEY_KPAD_MEM_CLEAR    0xD2     // Keypad Memory Clear
KEY_KPAD_MEM_ADD      0xD3     // Keypad Memory Add
KEY_KPAD_MEM_SUB      0xD4     // Keypad Memory Subtract
KEY_KPAD_MEM_MULTIPLY 0xD5     // Keypad Memory Multiply
KEY_KPAD_MEM_DIVIDE   0xD6     // Keypad Memory Divide
KEY_PLUS_MINUS        0xD7     // Keypad +/-
KEY_CLEAR             0xD8     // Keypad Clear
KEY_CLEAR_ENTRY       0xD9     // Keypad Clear Entry
KEY_BINARY            0xDA     // Keypad Binary
KEY_OCTAL             0xDB     // Keypad Octal
KEY_DECIMAL           0xDC     // Keypad Decimal
KEY_HEXADECIMAL       0xDD     // Keypad Hexadecimal
KEY_L_CONTROL         0xE0     // Keyboard LeftControl
KEY_L_SHIFT           0xE1     // Keyboard LeftShift
KEY_L_ALT             0xE2     // Keyboard LeftAlt
KEY_L_GUI             0xE3     // Keyboard Left GUI
KEY_R_CONTROL         0xE4     // Keyboard RightControl
KEY_R_SHIFT           0xE5     // Keyboard RightShift
KEY_R_ALT             0xE6     // Keyboard RightAlt
KEY_R_GUI             0xE7     // Keyboard Right GUI
```
```