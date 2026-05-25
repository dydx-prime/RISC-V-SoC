void putc_(char c) {
    *(volatile int*)0x400008 = c;
    while(*(volatile int*)0x400010 & (1<<9));
}

void puts_(const char* s) {
    while(*s) putc_(*s++);
}

void print_int(int n) {
    if(n < 0) { putc_('-'); n = -n; }
    if(n > 9) print_int(n / 10);
    putc_('0' + n % 10);
}

void main() {
    puts_("Hello from RISC-V!\n");
    int i;
    for(i = 1; i <= 10; i++) {
        puts_("count = ");
        print_int(i);
        putc_('\n');
    }
    while(1);
}
