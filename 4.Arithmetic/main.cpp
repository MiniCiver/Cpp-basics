#include <iostream>
using namespace std;

int main()
{
	// Addition '+'
	cout << 1 + 1 << endl;
	
	// Subtraction '-'
	cout << 1 - 1 << endl;
	
	// Multiplication '*'
	cout << 2 * 2 << endl;
	
	// Division '/'
	cout << 6 / 2 << endl; // Int division
	cout << 5 / 2.0 << endl; // Decimal division
	
	// Modulus '%'
	cout << 6 % 2 << endl;
	cout << 6 % 4 << endl;
	
	int total = 0;
	
	// Incrementing
	total = total + 1;
	total++;
	total+=2;
	
	// Decrementing	
	total = total - 1;
	total--;
	total-=2;
	
	// Casting
	cout << (double) 5 / 2 << endl;
	cout << (int) (5.51 / 2.23) << endl;
	
	cout << endl;
	return 0;
}
