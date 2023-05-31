#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * marks - reads the marks of students and take the sum with average
 * @a: Integer array to store the marks
 * @sum: Pointer to store sum
 * @average: Pointer to store average
 *
 * Return: Sum and Average
 */

void marks(int a[], float *sum, float *average)
{
	int i;

	printf("Enter 5 student marks: \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	*sum = 0;
	for (i = 0; i < 5; i++)
	{
		printf("student[%d]: %d\n", i + 1, a[i]);
		*sum += a[i];
	}
	*average = *sum / 5;
}

/**
 * main - Entry point
 * Description: print the marks with sum and average
 *
 * Return: Always 0
 */

int main(void)
{
	int marks_array[5];
	float sum, average;
	printf("All marks with Sum and Average\n");
	marks(marks_array, &sum, &average);
	
	printf("The sum is:%f\nAverage is:%f", sum, average);
	return (0);
}
