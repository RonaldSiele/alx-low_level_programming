#include <stdio.h>
/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/
int main(void)
{
int current = 1;
int previous = 1;
int temp;
int count = 2;
printf("%d, %d, ", current, previous);
while (count < 98)
{
temp = current;
current += previous;
previous = temp;
printf("%d, ", current);
count++;
}
printf("%d\n", current + previous);
return (0);
}

