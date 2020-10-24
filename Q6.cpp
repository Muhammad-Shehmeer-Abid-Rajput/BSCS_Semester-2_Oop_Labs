#include<iostream>

using namespace std;

int main()
{
	int InArr[10]{ 1,2,3,4,5,6,7,8,9,10 };		//initalizing InArr...
	
	int ResArr[9];								//declaring ResArr

	int* myptr;									//Declaring int pointer
	myptr = InArr;								//assigning the address of InArr to myptr

												//storing the operation in ResArr
	for (int i = 0; i < 9; i++)
	{
		ResArr[i] = *myptr + *(myptr + 1);
		myptr++;
	}
	
	myptr = ResArr;								//now pointing myptr to ResArr[0]
	//Printing the result using pointer
	for (int i = 0; i < 9; i++)
	{
		cout << *myptr << ' '; 
		myptr++;
	}

	return 0;
}