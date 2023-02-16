#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("The size of an int is %ld bytes.\n", sizeof(int));
printf("The size of a short is %ld bytes.\n", sizeof(short));
printf("The size of a long is %ld bytes.\n", sizeof(long));
printf("The size of a long long is %ld bytes.\n", sizeof(long long));
printf("The size of a float is %ld bytes.\n", sizeof(float));
printf("The size of a double is %ld bytes.\n", sizeof(double));
printf("The size of a long double is %ld bytes.\n", sizeof(long double));
printf("The size of a char is %ld bytes.\n", sizeof(char));
}
