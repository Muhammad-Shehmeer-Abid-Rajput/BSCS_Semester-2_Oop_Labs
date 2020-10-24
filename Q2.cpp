#include<iostream>
using namespace std;

int main()
{
	int x = 3;//given
	int y = 4;//given

	int *xPtr;//pointer for x
	int *yPtr;//int pointer for y

	xPtr = &x;//assiging address of int x
	yPtr = &y;//assiging address of int y

	cout << "Now taking the sum of two numbers using pointers:\n"
		<< "Sum of X and Y is ";
	cout << *xPtr + *yPtr << endl;//sum of the number using pointers

	return 0;
}
