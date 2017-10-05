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
	cout << "choose 3 ascending numbers . . .";
	while (!_kbhit ());
	_getch ();
	cout << '\n';
}
// main
void main() {
	int x; //store some 3 digit number in x
	cout << "Enter 3-digit number";
	cin >> x;
	int c= x % 10;
	int b= (x/10) % 10;
	int a= (x/100);
	bool ascending  =  a != b && b != c;
	bool descending = ascending;

	if(a > b)
	ascending = false;
else
	descending = false; 


	if  (b > c)
	ascending = false;
	else 
	descending = false;

	if(ascending)
	cout <<"Ascending \n";
	else if(descending)
	cout << "Descending \n";
	else 
	cout << "Neither";
}