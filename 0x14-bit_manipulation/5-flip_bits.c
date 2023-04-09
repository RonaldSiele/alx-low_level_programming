#include "main.h"

/**
* flip_bits - returns the number of bits flipped in the pattern
* @n: num one.
* @m: num two.
*
* Return: number  bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;
for (nbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
nbits++;
}
return (nbits);
}