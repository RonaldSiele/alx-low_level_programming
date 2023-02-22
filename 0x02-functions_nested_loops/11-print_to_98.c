#include <stdio.h>
/**
 *print_to_98-prints numbers separated by a comma
 *@n: input
 *
 */
void print_to_98(int n)
{
int i;
if (n <= 98) {
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98) 
{
printf(", ");
}
}
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}

