#include <sys/stat.h>

void putc_(char c) {
    *(volatile int*)0x400008 = c;
}

int _write(int fd, char* buf, int len) {
    for(int i = 0; i < len; i++) {
        putc_(buf[i]);
    }
    return len;
}

void* _sbrk(int inc)  { return (void*)-1; }
int   _close(int fd)  { return -1; }
int   _fstat(int fd, struct stat* st) { st->st_mode = S_IFCHR; return 0; }
int   _isatty(int fd) { return 1; }
int   _lseek(int fd, int offset, int whence) { return -1; }
int   _read(int fd, char* buf, int len) { return -1; }
void  _exit(int code) { while(1); }
int   _kill(int pid, int sig) { return -1; }
int   _getpid() { return 1; }
