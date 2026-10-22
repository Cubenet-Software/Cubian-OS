#include <stdint.h>
/**note to self: need to add micropython or cpython for python support for people who wanna code in python**/
#define VGA_ADDRESS 0xB8000
/**note to self: i truly am bad at C and C++. im more used to C++ than C and i dont think anyone is gonna wanna use a operating system that dont even have a file system LOL anyway close comment**/
/**gonna have to get a walking desk like linus torvalds -_-**/
void mainsys(uint32_t magic, uint32_t mbi) {
    (void)magic;
    (void)mbi;

    for (;;) {
    }
}
int kmain() {
    printf("Welcome to Cubian");
    return 0;
}

/**note to self: if i ever wanna redist cboot (the bootloader) i would have to make sure its posix compatible. dont want people trying to boot a nonexistant mainsys object**/
