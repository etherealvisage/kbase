#include <stdint.h>
#include "debug.h"

/* Notes:
    - This function is called with a small (2KB) stack in low memory. You
        should switch stacks as soon as possible, preferably to something in
        high memory.
    - mem contains a list of pairs, stored in low memory. Each pair is of the
        form (address, size). Note that these are not page-aligned addresses.
        Each of these pairs represents a single region of "usable" (free)
        memory. When making use of this list, you will need to also consider
        the memory taken up by the kernel being loaded.
    - It is assumed that this function does not return. If it does, a system
        crash will follow.
*/
void kmain(uint64_t *mem) {
    d_init(); // set up the serial port for debugging

    d_printf("Booting!\n");

    while(1) {}
}
