#include "main.h"
#include<stdio.h>
/**
 * main - prints number of arguements in program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}