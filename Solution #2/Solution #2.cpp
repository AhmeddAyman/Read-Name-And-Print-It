#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution 2
// Read Name And Print It.


string ReadName() 
{
	string name;

	cout << "\n Enter Your Full Name : " << endl;
	getline(cin, name);
	return name;

}

void PrintName(string name)
{
	cout << "\n Your Name is : " << name << endl;
}


int main()
{
	PrintName(ReadName());
	return 0;
}

