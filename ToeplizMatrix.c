Toepliz Matrix (100 Marks)
You will be given a two-dimensional array and a number and you are asked to find whether the given matrix is Toepliz or not. 

Input Format
You will be given a function with matrix as single argument. 

Constraints
1 <= n,m <= 1000

Output Format
You need to return 1 if the matrix is Toepliz, else return -1. 

Sample TestCase 1
Input
4
5
6 7 8 9 2
4 6 7 8 9
1 4 6 7 8
0 1 4 6 7
Output
1



#include <stdio.h>

int a[4][4];


void maindiag();
void smalldiag();
void revsmalldiag();

int main()

{

	printf("Enter the elements");
	for(int i = 0 ; i < 4; i++)
	{
		for(int j = 0; j< 4; j++)
		{
			scanf("%d",&a[i][j]);

		}
	}

	maindiag();
	smalldiag();
	revsmalldiag();





}


void maindiag()
{
	for(int y = 0; y < 4; y ++)
	{
		for( int u = 0; u < 4; u++)
		{
			if(u == y)
			{
				printf("%d", a[y][u]);
			}
		}
	}
	
}

void smalldiag()
{

for(int j = -3;j < 3; j++)
{
	for( int h = 0; h< 3; h++)
	{
		for(int y = 0; y <3; y++)
		{


			if((h-y) == j)
			{

				if(a[h][y] == a[h+1][y+1])
				printf("%d",a[h][y]);
			  int check = a[h][y];
			}
		}
		
	}

	printf("/n");
}
}
