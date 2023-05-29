#include <stdio.h>

/**
 * main - Entry point
 * Description: Checking compile time
 *
 * Return: Always 0
 */

int main(void)
{
	int a[5] = {1,5,3,4,6};
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Array elements[%d]: %d\n", i, a[i]); 
	}

	return (0);
}
