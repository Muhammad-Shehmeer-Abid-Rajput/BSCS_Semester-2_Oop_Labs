#include<iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = 3;
	int c = 10;

	if (a > c)
		swap(a, c);

	if (a > b)
		swap(a, b);

	//Now the smallest element is the 1st one. Just check the 2nd and 3rd

	if (b > c)
		swap(b, c);

	cout << "After soting a= "<< a <<" b = " << b << " c = " << c;
		
	int* a_ptr;
	int* b_ptr;
	int* c_ptr;
	
	a_ptr = &a;
	b_ptr = &b;
	c_ptr = &c;
	
	//median is the middle value of the numbers given in sequential order
	
	cout << "There are three numbers so, Median = 3+1/2 \t that is 2 " << endl;
	cout << "This means that b is the median of the three numbers: \n";

	cout << *b_ptr << " is the median\n";

	return 0;
}