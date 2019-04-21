#include <stdio.h>

int a[4][4];
void bubble_sort();
void print_array();

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

	bubble_sort();
	print_array();



}


void bubble_sort()
{


	for(int y = 0; y < 4; y++)
	{
		

		for(int step = 0; step < 4 - 1 ; ++step)
		{
			for(int i = 0; i < 4 - step - 1; i++)
			{
				if(a[y][i] > a[y][i+1])
				{
					int temp = a[y][i];
					a[y][i] = a[y][i+1];
					a[y][i+1] = temp;
				}
			}
		}
	}
}
 

void print_array()
 {
 	for(int i = 0; i < 4; i++)
 	{
 		 for(int y = 0; y < 4; y++)
 		 {
 		 	printf("%d", a[i][y]);
 		 }
 		 printf("\n");
 	}
 }
