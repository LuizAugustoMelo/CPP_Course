#include <iostream>

using namespace std;

int main()
{

	//Integer variable to AGE
	int age, age2, age3;

	//The CPP is case sensitive so 'age' is different of 'Age'
	int Age, Age2, Age3;

	age = 20;

	cout << "age: " << age << endl;
	
	//If I try run the Age variable the program crashes, because the variable not was initialized
	//This occur because the Visual Studio protect the system to not return a old memory value.
	//cout << "Age: " << Age << endl;

	system("pause");
	return 0;
}