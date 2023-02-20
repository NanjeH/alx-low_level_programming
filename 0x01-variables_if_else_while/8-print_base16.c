#include <stdio.h>
/**
 * main - prints the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)

{
int num;
for (num = 0; num < 16; num++)

	putchar((num % 10) + '0');
int letter;
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
