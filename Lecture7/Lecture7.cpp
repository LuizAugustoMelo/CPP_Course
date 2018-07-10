#include <iostream>

using namespace std;

int main()
{
	//Character declaration
	//Single Char
	char c = 'o';
	cout << "Single character = " << c << endl;

	//Array Char declaration
	char ar[20];
	//Array char population
	ar[0] = 'A';
	ar[1] = 'r';
	ar[2] = 'r';
	ar[3] = 'a';
	ar[4] = 'y';
	ar[5] = ' ';
	ar[6] = 'o';
	ar[7] = 'f';
	ar[8] = ' ';
	ar[9] = 'C';
	ar[10] = 'h';
	ar[11] = 'a';
	ar[12] = 'r';
	ar[13] = 'a';
	ar[14] = 'c';
	ar[15] = 't';
	ar[16] = 'e';
	ar[17] = 'r';
	ar[18] = 's';
	ar[19] = '\0';
	cout << "Array of characters 1 = " << ar << endl;

	//To end or clear the character array use the null character \0.
	char hello[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	cout << "Array of characters 2 = " << hello << endl;

	//To declare a Array use one of this tips
	char myword1[] = { 'B', 'y', 'e', '\0' };
	cout << "Array of characters 3 = " << myword1 << endl;

	char myword2[] = "Hello my friend!";
	cout << "Array of characters 4 = " << myword2 << endl;

	system("pause");
	return 0;
}