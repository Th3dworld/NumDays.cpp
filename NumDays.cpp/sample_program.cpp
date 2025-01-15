//This is a sample program that test the Numdays class
//The Numdays class was created simply to act as a member of another class
#include <iostream>
#include "NumDays.h"
using namespace std;

int main() {
int number = 0;
	Numdays one(8);
	Numdays two(16);

	cout << one.get_dayPresent() << endl;
	cout << one.get_hrsWorked() << endl;
	cout << two.get_dayPresent() << endl;
	cout << two.get_hrsWorked() << endl;
	cout << two + one << endl;
	two++;
	two++;
	two++;
	two++;
	cout << two.get_dayPresent() << endl;
	cout << two.get_hrsWorked() << endl;
	++two;
	++two;
	++two;
	++two;
	cout << two.get_dayPresent() << endl;
	cout << two.get_hrsWorked() << endl;

	return 0;
}