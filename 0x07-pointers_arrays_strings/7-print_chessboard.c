#include <string.h>
#include <stdio.h>
/**
 * print_chessboard- print chase board
 * @a: board array
 * @needle: bytes to find is s

 * Description: print chase board
 * Return: void
 */
void print_chessboard(char (*a)[8])
{

	for (int i = 0; i < 8; i++)
	{
		for (int x = 0; x < 8; x++)
		{
			printf(a[i][x]);
		}
		printf("\n");
	}
}
