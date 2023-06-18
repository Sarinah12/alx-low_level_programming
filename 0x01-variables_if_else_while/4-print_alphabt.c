#include <stdio.h>
#include  <stdioib.h>
#include <string.h>

/**
 * main - prints the alphabet without q and e.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && !=113)
		{putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
