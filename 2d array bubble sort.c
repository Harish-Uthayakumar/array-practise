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
		for( int h = 0; h < 3; h ++)
		{
			for(int j = h; j < 4; j++)
			{
				if(a[h]> a[j])
				{
					int temp = a[y][h];
					a[y][h] = a[y][j];
					a[y][j] = temp;
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
 	}
 }
