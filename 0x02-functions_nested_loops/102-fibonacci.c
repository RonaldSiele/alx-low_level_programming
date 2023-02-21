#include <stdio.h>
/**
 *
 *main-counts the fibonnaci
 */
int main(void)
{
int current = 2;
int previous = 1;
int temp;
int count = 2;
printf("1, 2, ");
while (count < 50)
{
temp = current;
current += previous;
previous = temp;
printf("%d", current);
if (count < 49)
{
printf(", ");
}
count++;
}
printf("\n");
return (0);
}

