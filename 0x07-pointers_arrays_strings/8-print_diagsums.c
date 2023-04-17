#include <stdio.h>
/**
 * print_diagsums- print matrix diagonal sums
 * @a: matrix
 * @size: matrix size

 * Description:  print matrix diagonal sums
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int ar[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int x = 0; x < size; x++)
		{
			if (x == 0 && i == 0)
				sum = sum + a[i];
			else
				sum = sum + a[i + size - 1];
		}
	}

	printf("%d ", sum);
	sum = 0;

	for (int i = size; i >= 0; --i)
	{
		for (int x = 0; x < size; x++)
		{
			if (x == size - 1 && i == size - 1)
				sum = sum + a[i];
			else
				sum = sum + a[i - size - 1];
		}
	}
	printf("%d ", sum);
}
