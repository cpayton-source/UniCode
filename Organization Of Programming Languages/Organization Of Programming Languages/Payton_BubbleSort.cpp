# include <iostream>

using namespace std;
int main()
{
	//Initialize the elements
	int array[10] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
	int temp, i, j;
	
	//Print out the unsorted array with loop
	cout << "Unsorted Array" << endl;
	for(i = 0; i<sizeof(array)/sizeof(array[0]); i++)
	{
		cout << array[i] << ", ";
	}
	//Bubble sort algorithm
	for(i = 0; i< sizeof(array)/sizeof(array[0]); i++)
	{
		for(j = i+1; j<sizeof(array)/sizeof(array[0]); j++)
		{
			//Swap
			if(array[i]>array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}	
	}
	//Print out the sorted array with loop
	cout << "\nSorted Array" << endl;
	for(i = 0; i<sizeof(array)/sizeof(array[0]); i++)
	{
		cout << array[i] << ", ";
	}
	return 0;
}