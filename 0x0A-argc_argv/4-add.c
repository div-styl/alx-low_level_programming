#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*by div-styl*/
/**
 * main - add up two numbers.
 * incase you gave character or odd symble the output: Error and
 * Return 1
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char  **argv)
{
	int a, b, x, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (2);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		x = strtol(argv[a], NULL, 10);
		sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}