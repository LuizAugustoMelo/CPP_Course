#include <iostream>

using namespace std;

int main()
{
	//Set money to US$20.00
	float money = 20.f;

	//If I have more than 10 dollars I'm go to Cinema
	if (money > 10.f)
	{
		cout << "I'm go to Cinema! Yehhhh!!" << endl;
	}
	//I spend the money with snacks and transportation
	cout << "I spend US$12.00 in transport and snacks!" << endl;
	money -= 12.f;
	if (money > 10.f)
	{
		cout << "I'm go to Cinema! Yehhhh!!" << endl;
	}
	//If the declaration above not is valid, run the else...
	else
	{
		cout << "I'm not go to cinema, because my money is = " << money << " :( :( :( :(" << endl;
	}

	//Types of Relational Operators to use in 'if' declarations
	//Equal to ==
	if (money == 8)
	{
		cout << "Money is equal to US$8.00" << endl;
	}
	//Not Equal to !=
	if (money != 10)
	{
		cout << "Money Not is Equal to US$10.00" << endl;
	}
	//Less Than <
	if (money < 10)
	{
		cout << "Money is Less Than US$10.00" << endl;
	}
	//Greater Than >
	if (money > 7)
	{
		cout << "Money is Greater Than US$7.00" << endl;
	}
	//Less Than or Equal to <=
	if (money <= 8)
	{
		cout << "Money is Less Than or Equal to US$8.00" << endl;
	}
	//Greater Than or Equal to >=
	if (money >= 8)
	{
		cout << "Money is Greater Than or Equal to US$8.00" << endl;
	}
	//AND &&
	//In this case, only if two Relational Operators are valid the 'if' is true and run the code below.
	//In this Declaration the Relational 'money == 8' is valid (true) and the 'money < 10' is valid (true)
	if (money == 8 && money < 10)
	{
		cout << "Money is Equal to US$8.00 AND Less Than to US$10.00" << endl;
	}
	//OR ||
	//In this case, if one of two Relational Operators are valid the 'if' is true and run the code below.
	//In this Declaration the Relational 'money == 8' is valid (true) and the 'money > 10' not is valid (false)
	if (money == 8 || money > 10)
	{
		cout << "In this case, if one of two Relational Operators are valid the 'if' is true and run the code below." << endl;
		cout << "Money is Equal to US$8.00 OR Greater Than to US$10.00" << endl;
	}

	system("pause");
	return 0;
}