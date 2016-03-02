#include <stdint.h>
#include "debug.h"

void kmain(uint64_t *mem) {
    d_init(); // set up the serial port

    d_printf("Booting!\n");

    while(1) {}
}
