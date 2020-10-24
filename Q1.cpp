#include<iostream>

using namespace std;

int main()
{
	int x, y;
	x = 3, y = 4;
	int* p;
	int* q;
	p = &x;
	q = &y;
	
	cout << x << '\t' << p << '\t' << *p << '\t' << &p << '\t' << &x << endl;
	//x has a user defined value of 3
	//p holds the address of x
	//*p will point to the value stored in address x
	//&p will be address of the variable p which will hold the value of x
	//&x will hold the address of the of variable x

	cout << y << '\t' << q << '\t' << *q << '\t' << *q << '\t' << &y << endl;
	
	//y has a user defined value of 4
	//q holds the address of y
	//*q will point to the value stored in address y
	//&q will be address of the variable p which will hold the value of y
	//&q will hold the address of the of variable y
	
	return 0;
}