/*
 * Rotating RISC-V logo demo
 * No stdio - uses direct UART output
 */

// UART registers
#define UART_DATA  ((volatile int*)0x400008)
#define UART_CTRL  ((volatile int*)0x400010)

static void putc_(char c) {
    *UART_DATA = c;
}

static void print_str(const char* s) {
    while(*s) putc_(*s++);
}

// ANSI escape sequences as string literals
#define ANSICOL(C) "\033[" #C "m  "

const char* cmap[8] = {
    ANSICOL(44),   // dark blue
    ANSICOL(104),  // light blue
    ANSICOL(47),   // light gray
    ANSICOL(102),  // light green
    ANSICOL(103),  // light yellow

    ANSICOL(103),
    ANSICOL(103),
    ANSICOL(107)   // white
};

unsigned char logo[16][16] = {
    {7,7,7,7,7,7,5,3,3,3,3,3,3,3,3,7},
    {7,7,7,7,7,7,7,5,3,3,3,3,3,3,3,7},
    {1,1,1,1,2,7,7,7,3,3,3,3,3,3,3,7},
    {0,0,0,0,0,1,7,7,5,3,3,3,3,3,3,7},

    {0,0,0,0,0,0,7,7,6,3,3,3,3,3,6,7},
    {0,0,0,0,0,0,7,7,5,3,3,3,3,4,7,7},
    {0,0,0,0,0,2,7,7,4,3,3,3,3,7,7,7},
    {0,2,2,2,7,7,7,6,3,3,3,3,6,7,7,7},
    {0,7,7,7,7,7,6,3,3,3,3,5,7,7,2,7},
    {0,1,7,7,7,4,3,3,3,3,3,7,7,7,0,7},
    {0,0,2,7,7,6,3,3,3,3,6,7,7,1,0,7},
    {0,0,0,2,7,7,5,3,3,5,7,7,2,0,0,7},

    {0,0,0,0,7,7,7,5,4,7,7,2,0,0,0,7},
    {0,0,0,0,0,7,7,7,7,7,7,0,0,0,0,7},
    {0,0,0,0,0,1,7,7,7,7,1,0,0,0,0,7},
    {7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7}
};

int sintab[64] = {
    0,25,49,74,97,120,142,162,181,197,212,225,236,244,251,254,
    256,254,251,244,236,225,212,197,181,162,142,120,97,74,49,25,
    0,-25,-49,-74,-97,-120,-142,-162,-181,-197,-212,-225,-236,-244,
    -251,-254,-256,-254,-251,-244,-236,-225,-212,-197,-181,-162,
    -142,-120,-97,-74,-49,-25
};


#define GL_width  40
#define GL_height 40

void main() {
    int frame    = 0;
    int last_col = -1;

    for(;;) {
        print_str("\033[H"); // reset cursor to top-left


        int scaling = (sintab[frame & 63] + 400) << 1;
        int Ux =  scaling * sintab[ frame       & 63];
        int Uy =  scaling * sintab[(frame + 16) & 63];
        int Vx = -Uy;
        int Vy =  Ux;
        int X0 = -(GL_width  / 2) * (Ux + Vx);
        int Y0 = -(GL_height / 2) * (Uy + Vy);


        for(int y = 0; y < GL_height; ++y) {
            int X = X0;
            int Y = Y0;
            for(int x = 0; x < GL_width; ++x) {
                unsigned char col = logo[(Y >> 18) & 15][(X >> 18) & 15];
                if(col == last_col) {
                    print_str("  ");        // same color, just spaces

                } else {
                    print_str(cmap[col]);   // emit ANSI color + spaces
                }
                last_col = col;
                X += Ux;
                Y += Uy;
            }
            print_str("\033[49m\n"); // reset bg color, newline
            last_col = -1;
            X0 += Vx;
            Y0 += Vy;
        }

        ++frame;
    }
}
