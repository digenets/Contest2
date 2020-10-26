#define f1
#ifdef f1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define SIZE 101

int modulo(int dividend, int divisor)
{
	return (divisor + (dividend % divisor)) % divisor;
}

int main()
{
	int N = 0, M = 0;
	int arr1[SIZE][SIZE] = { 0 }, arr2[SIZE][SIZE] = { 0 };
	scanf("%d%d", &N, &M);
	// ввод массива
	for (int n = 0; n < N; n++)
	{
		for (int m = 0; m < M; m++)
		{
			scanf("%d", &arr1[n][m]); // Массив введён
		}
	}
	// приравнивание массивов
	for (int n = 0; n < N; n++)
	{
		for (int m = 0; m < M; m++)
		{
			arr2[n][m] = arr1[n][m];
		}
	}

	int i = 0, alive = 1, countCh = 1;
	while ((i < 1000) && (alive != 0) && (countCh != 0))
	{
		alive = 0;
		countCh = 0;
		for (int n = 0; n < N; n++)
		{
			for (int m = 0; m < M; m++)
			{
				int sum = 0;
				sum = arr1[n][modulo(m + 1, M)] + arr1[n][modulo(m - 1, M)] +
					  arr1[modulo(n + 1, N)][m] + arr1[modulo(n - 1, N)][m] +
					  arr1[modulo(n + 1, N)][modulo(m + 1, M)] +
					  arr1[modulo(n + 1, N)][modulo(m - 1, M)] +
					  arr1[modulo(n - 1, N)][modulo(m + 1, M)] +
					  arr1[modulo(n - 1, N)][modulo(m - 1, M)];
				if ((sum == 3) && (arr1[n][m] != 1))
				{
					arr2[n][m] = 1;
					countCh++;
					
				}
				if ((sum != 2) && (sum != 3) && (arr1[n][m] == 1))
				{
					arr2[n][m] = 0;
					countCh++;
				}
				if (arr1[n][m] == 1)
				{
					alive++;
				}
			}
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					arr1[i][j] = arr2[i][j];
				}
			}
			for (int n = 0; n < N; n++)
			{
				for (int m = 0; m < M; m++)
				{
					if (arr2[n][m] == 1)
						printf("x");
					else
						printf(" ");

				}
				

			}
		}
		/*if (((i == 0) ||(i == 9) || (i == 99) || (i == 999)) && (alive != 0) && (countCh != 0))
		{
			printf("Step %d: alives %d\n", i + 1, alive);
			for (int n = 0; n < N; n++)
			{
				for (int m = 0; m < M; m++)
				{
					if (arr1[n][m] == 1)
						printf("x");
					else
						printf(" ");
					
				}
				printf("\n");
			}
		}*/
		i++;
	}
	printf("End life step %d", i);

	printf("xuy2");

	printf("xuy");
	//for (int c = 0; c < 1000; c++)
	//{
	//	/*for (int j = 2; j < M - 1; j++)
	//	{
	//		arr1[0][j] = arr1[N - 1][j];
	//	}
	//	for (int n = 2; n < N - 1; n++)
	//	{
	//		arr1[n][0] = arr1[n][M - 1];
	//	}
	//	for (int j = 2; j < M - 1; j++)
	//	{
	//		arr1[N][j] = arr1[1][j];
	//	}
	//	for (int n = 2; n < N - 1; n++)
	//	{
	//		arr1[n][M] = arr1[n][1];
	//	}
	//	arr1[0][0] = arr1[N - 1][M - 1];
	//	arr1[N][M] = arr1[1][1];
	//	arr1[0][M] = arr1[N - 1][1];
	//	arr1[N][0] = arr1[1][M - 1];*/

	return 0;
}
#endif f1
