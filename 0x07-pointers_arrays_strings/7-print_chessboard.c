#include "main.h"
/**
* print_chessboard - function
* Description: prints the chess board
* @a: parameter
* Return: nothing 0
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	 for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%s", **a);
			if (j == 8)
				printf("\n");
		}
	}
}
