#include <stdio.h>

/**
 * main - Entry point
 * Description: Checking runtime
 * Return: Always 0
 */

int main(void)
{
	int a[5], i;

	printf("Enter 5 elements:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < 5; i++)
	{
		printf("\nArray element[%d]: %d", i, a[i]);
	}


	return (0);
}
