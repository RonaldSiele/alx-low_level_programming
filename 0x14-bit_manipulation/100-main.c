#include <stdio.h>
#include "main.h"
int main(void)
{
int x;
x = get_endianness();
if (x != 0)
{
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
return (0);
}
