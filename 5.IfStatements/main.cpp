#include <iostream>
using namespace std;

int main()
{
	int age = 20;
	
	if (age == 18) {
		cout << "Yes" << endl;
	}
	
	// '==' '!=' '<' '>' '<=' '>='
	if (age >= 18) {
		cout << "Young" << endl;
	} else if (age < 18) {
		cout << "Kid" << endl;
	}
	
	bool adult = false;
	
	if (adult) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	cout << endl;
	return 0;
}
