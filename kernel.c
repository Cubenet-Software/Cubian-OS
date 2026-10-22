#include <stdint.h>
/**note to self: need to add micropython or cpython for python support for people who wanna code in python**/
#define VGA_ADDRESS 0xB8000
#define VGA_WIDTH 80
#define VGA_HEIGHT 25

static int cursor_x = 0;
static int cursor_y = 0;

static void putchar(char c) {
    volatile char *video = VGA_MEMORY;
    int index = (cursor_y * VGA_WIDTH + cursor_x) * 2;

    if (c == '\n') {
        cursor_y++;
        cursor_x = 0;
        return;
    }

    if (c == '\r') {
        cursor_x = 0;
        return;
    }

    video[index] = c;
    video[index + 1] = 0x07;

    cursor_x++;
    if (cursor_x >= VGA_WIDTH) {
        cursor_x = 0;
        cursor_y++;
    }

    if (cursor_y >= VGA_HEIGHT) {
        cursor_y = 0;
    }


static void print(const char *text) {
    while (*text) {
        putchar(*text++);
    }
}
/**note to self: i truly am bad at C and C++. im more used to C++ than C and i dont think anyone is gonna wanna use a operating system that dont even have a file system LOL anyway close comment**/
/**gonna have to get a walking desk like linus torvalds -_-**/
void mainsys(uint32_t magic, uint32_t mbi) {
    (void)magic;
    (void)mbi;

    for (;;) {
    }
}
int kmain() {
    print("Welcome to Cubian");
    return 0;
}

/**note to self: if i ever wanna redist cboot (the bootloader) i would have to make sure its posix compatible. dont want people trying to boot a nonexistant mainsys object**/
