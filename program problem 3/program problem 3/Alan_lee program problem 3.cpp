/*
/*
Rahul Singh and Alan Lee - 1st period
Program Problem 3
Using a 3 digit number to put create separate varibles
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _khbit, (), and  _getch () for pause ()
// namespace
using namespace std;
//functions ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// main
int main() {
	int y = 1;
	while (y < 31)
	{	
	int x;
	cout << "Enter 3-digit number" << endl;
	cin >> x;
	int c = x % 10;
	int b = (x / 10) % 10;
	int a = (x / 100);
	bool ascending = a != b && b != c;
	bool descending = ascending;

	if (a > b)
		ascending = false;
	else
		descending = false;


	if (b > c)
		ascending = false;
	else
		descending = false;

	if (ascending)
		cout << "The number " << x << " is ascending. \n" << endl;
	else if (descending)
		cout << "The number " << x << " is descending. \n" << endl;
	else
		cout << "The number " << x << " is neither ascending or descending. \n" << endl;
	y++;
	_getch();
}
	return 0;
}
