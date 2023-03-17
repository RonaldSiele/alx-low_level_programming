#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 * 
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}
	
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{	
			isn2 = 0;
			break;
		}
	
	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 *  _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 * 
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
		int i = 0;
		
		for (i = 0; i < lar; i++)
			ar[i] = '0';
		ar[lar] = '\0';
		return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 * 
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int ln;
	
	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}
	
	return (ln);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * 
 * Return: 0 - success.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void validate_input(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }
    char* num1 = argv[1];
    char* num2 = argv[2];
    for (int i = 0; i < strlen(num1); i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            exit(98);
        }
    }
    for (int i = 0; i < strlen(num2); i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            exit(98);
        }
    }
}

void multiply(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result[len1+len2];
    memset(result, 0, sizeof(result));
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = len1-1; i >= 0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j = len2-1; j >= 0; j--) {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1+i_n2] + carry;
            carry = sum/10;
            result[i_n1+i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0) {
            result[i_n1+i_n2] += carry;
        }
        i_n1++;
    }
    int i = len1+len2-1;
    while (i >= 0 && result[i] == 0) {
        i--;
    }
    if (i == -1) {
        printf("0\n");
    }
    else {
        while (i >= 0) {
            printf("%d", result[i--]);
        }
        printf("\n");
    }
}

int main(int argc, char* argv[]) {
    validate_input(argc, argv);
    char* num1 = argv[1];
    char* num2 = argv[2];
    multiply(num1, num2);
    return (0);
}

