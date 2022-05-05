#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Hello";
	string s2 = "World";
	string s3 = "Hello World";
	
	int len = s1.length();
	string s4 = s1.append(s2);
	char l1 = s1.at(0);
	string s5 = s3.substr(0, 4);
	string s6 = s2.insert(0, "@");
	int p = s1.find('o');
	string s7 = s1.erase(0, 2);
	
	cout << len << s4 << l1 << s5 << s6 << p << s7;
	
	cout << endl;
	return 0;
}
