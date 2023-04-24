/**
 * *_ita - integer  to ASCII
 * @n: long int
 * @base: base
 * Return: *char
 */

char *_ita(long int n, int base)
{
static char buffer[50];
static char *arr = "0123456789abcdef";
char sign = 0;
char *p;
unsigned long nbr = n;

if (n < 0)
{
nbr = -n;
sign = '-';
}
p = &buffer[49];
*p = '\0';

do {
*--p = arr[nbr % base];
nbr /= base;
} while (nbr != 0);

if (sign)
*--p = sign;

return (p);
}
