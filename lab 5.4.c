#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int Low = -100, High = 100;

int main(void) {
	
	const int n = 3, m = 4;

	double a[n][m];

	srand(time(0));
	for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++)
	{
		a[i][j] = (float) rand() / RAND_MAX * (High - Low) + Low;
	}printf("\n");

	printf("\nМасив:\n\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
		{
			printf("a[%d][%d] = %6.2lf\t", i, j, a[i][j]);
		}
	printf("\n");
	}


	double tmp;
	for (int k = 0; k < n*m; k++)
	{
		for (int i = 0; i < n; i++)
		{	
			for (int j = 1; j < m; j++)
			{	
				if (a[i][j] < a[i][j-1])
				{
					tmp = a[i][j];
					a[i][j] = a[i][j-1];
					a[i][j-1] = tmp;
				}
			}
		}
	}


	printf("\n\n\nМасив відсортований по зростанню значень елементiв рядка:\n\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
		{
			printf("a[%d][%d] = %6.2lf\t", i, j, a[i][j]);
		}
	printf("\n");
	}

	return 0;
}
