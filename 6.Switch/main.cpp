#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month;
	cout << "Enter the month: ";
	cin >> month;
	
	switch (month) {
		case 1:
			cout << "January";
			break;
		case 2:
			cout << "February";
			break;
		case 3:
			cout << "March";
			break;
		case 4:
			cout << "April";
			break;
		case 5:
			cout << "May";
			break;
		case 6:
			cout << "June";
			break;
		case 7:
			cout << "July";
			break;
		case 8:
			cout << "Agust";
			break;
		case 9:
			cout << "September";
			break;
		case 10:
			cout << "October";
			break;
		case 11:
			cout << "November";
			break;
		case 12:
			cout << "December";
			break;
		default:
			cout << "No matches";
	}
	cout << endl;
	
	char grade;
	cout << "Enter the grade: ";
	cin >> grade;
	
	switch (grade) {
		case 'A':
			cout << "Perfect";
			break;
		case 'B':
			cout << "Great";
			break;
		case 'C':
			cout << "Good";
			break;
		case 'D':
			cout << "Bad";
			break;
		case 'E':
			cout << "Very bad";
			break;
		default:
			cout << "No matches";
	}
	
	cout << endl;
	return 0;
}
