#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define SIZE 101

int main()
{
	int N = 0, M = 0;
	int arr1[SIZE][SIZE] = { 0 }, arr2[SIZE][SIZE] = { 0 };
	scanf("%d%d", &N, &M);
	for (int i = 1; i < N+1; i++)
	{
		for (int j = 1; j < M+1; j++)
		{
			scanf("%d", &arr1[i][j]); // Массив введён
		}
	}

	int i = 0, moved = 1, countCh = 1;
	while ((i < 1000) && (moved != 0) && (countCh != 0))
	{
		for (int n = 0; n < N; n++)
		{
			for (int m = 0; m < M; m++)
			{
				int sum = 0;
				sum = arr1[(n-1) % N][m] + arr1[(n+1)%N][m] + arr1[n][(m-1) % M] + arr1[n][(m+1) % M] + arr1[(n+1)%N][(m+1)%M] + arr1[(n+1)%N][(m-1)%M] + arr1[(n-1)% N][(m+1)%M] + arr1[(n-1)%N][(m-1)% M];
				if ((sum >= 3) && (arr1[n][m] != 1))
				{
					arr1[n][m] = 1;

				}
			}
		}
		i++;
	}






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

	//	for (int i = 0; i < N; i++)
	//	{
	//		for (int j = 0; j < M; j++)
	//		{

	//		}
	//	}

	//	
	//}



	return 0;
}