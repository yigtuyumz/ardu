#include "libmy.h"

void
my_putchar(char c)
{
	Serial.write(&c, 1);
}

void
my_putnbr(long nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb *= -1;
		if (nb == (-2147483647 - 1)) {
			nb = 147483648;
			my_putchar('2');
		}
	}

	if (nb > 9) {
		my_putnbr(nb / 10);
		my_putchar((nb % 10) + 48);
	}

	else {
		my_putchar(nb + 48);
	}
}

void
my_putstr(const char *str)
{
	unsigned long i = 0;
	while (*(str + i)) {
		my_putchar(*(str + i));
		i++;
	}
}
