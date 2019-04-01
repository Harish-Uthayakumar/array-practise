#include<stdio.h>

void inserstion(int arr[], int n)
{
	int key,j,i;

	for(i = 1; i < n; i++)
	{

		key = arr[i];
		j = i - 1;

		while( j > 0 && arr[j] > key)

		{

			arr[j+1] = arr[j];
			j = j - 1;
		}

		arr[j + 1 ] = key;
	}


	for(int j = 0; j < n; j++)
	{
		 printf("%d \n", arr[j]);
	}



}


int main()

{

	int arr[] = {1,7,55,33};
	int n = sizeof(arr)/sizeof(arr[0]);
	inserstion(arr,n);


}