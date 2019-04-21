So you take a 4 by 4 array and find all the diagonal entries of the array and print their reverse:

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

for(int j = -3;j < 4; j++)
{
	for( int h = 0; h< 4; h++)
	{
		for(int y = 0; y <4; y++)
		{
			if((h-y) == j && (h-y) != 0)
			{
				printf("%d",a[h][y]);
			}
		}
		
	}

	printf("/n");
}
}

void revsmalldiag()
{

for(int j = -3; j < 4; j++)
{
	for( int h = 3; h >= 0; h--)
	{
		for(int y = 3; y >= 0; y--)
		{
			if((h-y) == j)
			{
				printf("%d",a[h][y]);
			}
		}
	}

	printf("\n");
}
}





