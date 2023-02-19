#include <stdio.h>
/**
 * main - printing all letters except p and q
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
		return (0);
}
