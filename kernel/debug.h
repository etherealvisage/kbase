#ifndef KUTIL_H
#define KUTIL_H

#include <stdint.h>

// port I/O functions
void koutb(uint16_t port, uint8_t value);
uint8_t kinb(uint16_t port);

// debug functions
void d_init();
void d_putchar(char c);
void d_printf(const char *format, ...);

#endif
