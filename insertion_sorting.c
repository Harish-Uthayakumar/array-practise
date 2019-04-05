#include<stdio.h>

int main()
{

	printf("Enter size");
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int num;int row;int column;int index;


	for(int h = 0; h < n; h++)
	{

		for(int k =0; k < n; k++)
		{

			arr[h][k] = 0;
		}
	}

	for(int i = 0; i < n*n; i++)
	{

		scanf("%d",&num);
		row = num%n;
		index = 1;
		for(int k =0; k < n & index == 1; k++)
		{

			if(arr[row][k] == 0)
			{
				arr[row][k] = num;
				index = 0;

			}
		}


	}



	int arr1[4][4] = {{32,56,100,0},{45,29,89,21},{34,46,78,0},{27,99,67,23}};


	int sum1[4] = {0,0,0,0};
	for(int i = 0; i < 4 ; i++)
	{
		for( int j =0; j < 4; j++)
		{
			sum1[i] = sum1[i] + arr1[i][j];

		}
	}
int sum[n];

		for(int h =0; h < n; h++)
			{
				sum[h] = 0;
			}
	for(int i = 0; i < n; i++)
	{

		for(int k = 0; k< n;k ++)
		{
			sum[i] = sum[i] + arr[i][k];

		}
	}

	int count = 0;

	for(int y = 0; y < n; y++)
	{
		if(sum[y] == sum1[y])
			count++;
	}

	if(count == n)
	{
		printf("This is a combination");
	}
	else 
	{
		printf("This is not a combination" );
	}




	for(int j =0; j < n; j++)
	{

		for(int k = 0; k < n; k++)
		{

			printf("%d \t",arr[j][k]);

		}

		printf("\n");
	}


}