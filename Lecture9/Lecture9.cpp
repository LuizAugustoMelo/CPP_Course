#include <iostream>

using namespace std;

int main()
{
	//Set money to US$20.00
	float money = 20.f;

	//Nesting If
	//One 'if' inside of another 'if'
	if (money > 19.f)
	{
		//If the declaration 'if' have only one line of code not is necessary the use of {}
		if (money < 21)
			cout << "The Money is Greater Than US$19.00 and the Money is Less Than or Equal to US$20.00" << endl;
	}

	//This is a cast declaration (int)money and convert money type to int
	if (((int)money % 2 == 0) && money < 21)
	{
		cout << "Money is even number and less than 21" << endl;
	}

	system("pause");
	return 0;
}