#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int n;
	
	cout << "Please enter your name: ";
	cin >> name;
	
	cout << "Please enter your age: ";
	cin >> n;
	
	cout << "Welcome " << name << endl;
	cout << "Your are " << n << " years old" << endl;
	
	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Welcome " << name << endl;
	
	cout << endl;
	return 0;
}
