#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/
int main() {
    int first = 1;
    int second = 2;
    int next;
    int count = 0;

    printf("%d, %d, ", first, second);
    count += 2;

    while (count < 50) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
        count++;
    }

    printf("\n");

    return 0;
}

