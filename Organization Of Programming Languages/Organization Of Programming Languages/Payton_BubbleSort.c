#include <stdio.h>

int main(){
	//Initialize the necessary variables
	int array[] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
	int i, j, temp;;
	
	//Print out array using loop
	printf("Unsorted Array\n");
	for(i =0; i<sizeof(array)/sizeof(array[0]); i++)
	{
		printf("%d ", array[i]);;
	}
	printf("\n");
	
	//Bubble sort algo
	for(i = 0; i<sizeof(array)/sizeof(array[0])-1; i++)
	{
		for(j = i + 1; j<sizeof(array)/sizeof(array[0]); j++)
		{
			//If elem i > elem j, swap
			if(array[i] > array[j])
			{
				temp = array[i];;
				array[i] = array[j];
				array[j] = temp;;
			}		
		}
	}	
	//Print sorted array
	printf("\nSorted Array\n");
	for(int i =0; i<sizeof(array)/sizeof(array[0]); i++)
	{
		printf("%d ", array[i]);;
	}
	printf("\n");
	return 0;
}