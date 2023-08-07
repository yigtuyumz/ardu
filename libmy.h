/*
 * Ardunio genel olarak sayisal degerler icin 'long', alfanumerik ifadeler
 * (string ve char) icin uint8_t veri tipini kullaniyor. Bunun sebebi,
 * bir struct'in icerisindeki kisimlara ulasilabilir olmasidir. (bitfield)
 * uint8_t (8 bit genisligindeki unsigned integer) === 1 byte
 *
 * Sistem 32 bit oldugu icin veri tiplerindeki kapsam, yariya duser. (vs 64bit)
 *
 * Dolayisiyla olusturulan tum fonksiyonlar, bu durum dikkate alinarak
 * olusturulmustur.
 */
#ifndef LIBMY_H
# define LIBMY_H

#include "Arduino.h"

# define INT_MAX 0x7FFF                /* 32767 */
# define INT_MIN (~INT_MAX)            /* -32768 */
# define UINT_MAX 0xFFFF               /* 65535 */
# define UINT_MIN 0                    /* 0 */
# define LONG_MAX 0x7FFFFFFF           /* 2147483647 */
# define LONG_MIN (~LONG_MAX)          /* -2147483648 */
# define ULONG_MAX 0xFFFFFFFF          /* 4294967295 */
# define ULONG_MIN 0                   /* 0 */
# define SCHAR_MAX 0x7F                /* 127 */
# define SCHAR_MIN (~SCHAR_MAX)        /* -128 */
# define UCHAR_MIN 0                   /* 0 */
# define UCHAR_MAX 0xFF                /* 255 */


void my_putchar(char c);
void my_putnbr(long nb);
void my_putstr(const char *str);

#endif /* LIBMY_H */
