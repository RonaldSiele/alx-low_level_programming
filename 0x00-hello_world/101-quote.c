#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t num_bytes = write(STDERR_FILENO, message, 46);
return (num_bytes) == 46 ? 1 : 0;
}