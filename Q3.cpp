#include<iostream>
using namespace std;

int main()
{
	int x;

	cout << "Enter the number you want to read:\n";
	cin >> x;

	int *x_Ptr;

	x_Ptr = &x;

	cout << "The square of the number is: " << *x_Ptr * *x_Ptr << endl;
	cout << "The cube of the number is: " << *x_Ptr * *x_Ptr * *x_Ptr << endl;
	cout << "The half of the number is: " << *x_Ptr / 2 << endl;	
		  


	return 0;
}