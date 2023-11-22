#include "main.h"
#include<stdio.h>
/**
 * main - prints arguements received in the program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
for (x = 0; x < argc; x++)
{
	printf("%s\n", argv[x]);
}
				return (0);
				}
