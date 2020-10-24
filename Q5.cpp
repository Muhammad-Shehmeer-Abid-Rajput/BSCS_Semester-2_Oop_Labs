#include<iostream>
using namespace std;

int  main()
{
	int arr[10]{1,2,3,4,5,6,7,8,9,10};				//creating array of 10 elements
	int* arr_Ptr;									//creating pointer for the array
	
	arr_Ptr = arr;									//assigning the address of arr[0] to arr_Ptr

	for (int i = 0; i < 10; i++)
	{
		*arr_Ptr = *arr_Ptr + 3;
		arr_Ptr++;
	}
	
	arr_Ptr = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << *arr_Ptr++ << " ";
	}

	return 0;
}