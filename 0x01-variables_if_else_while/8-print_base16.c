#include <stdio.h>
/**
 * main - manin function
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <10; i++)
		putchare(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

