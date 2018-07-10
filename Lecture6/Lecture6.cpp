//Operators

#include <iostream>

using namespace std;

int main()
{
	int n1, n2, result;

	n1 = 20;
	n2 = 10;

	cout << "N1 = " << n1 << endl;
	cout << "N2 = " << n2 << endl;
	cout << endl;

	//Arithmetic Operators
	cout << endl;
	cout << "Arithmetic Operators" << endl;
	cout << endl;

	//Plus Operator
	result = n1 + n2;
	cout << "Sum 'n1 + n2' = " << result << endl;

	//Subtraction Operator
	result = n1 - n2;
	cout << "Sub 'n1 - n2' = " << result << endl;

	//Multiplication Operator
	result = n1 * n2;
	cout << "Mult 'n1 * n2' = " << result << endl;

	//Division Operator
	result = n1 / n2;
	cout << "Div 'n1 / n2' = " << result << endl;

	//Modulus Operator
	result = n2 % n1;
	cout << "Modulus 'n2 % n1' = " << result << endl;

	//Increment Operator
	n1++;
	cout << "Increment 'n1++' = " << n1 << endl;

	//Decrement Operator
	n1--;
	n1--;
	cout << "Decrement 'n1--' = " << n1 << endl;

	//Relational Operators
	cout << endl;
	cout << "Relational Operators - 0 == false - 1 == true" << endl;
	cout << endl;

	//Equal To Operator
	cout << "Equal To 'n1 == n2' = " << (n1 == n2) << endl;

	//Not Equal To Operator
	cout << "Not Equal To 'n1 != n2' = " << (n1 != n2) << endl;

	//Less Than Operator
	cout << "Less Than 'n1 < n2' = " << (n1 < n2) << endl;
	
	//Greater Than Operator
	cout << "Greater Than 'n1 > n2' = " << (n1 > n2) << endl;
	
	//Less Than or Equal To Operator
	cout << "Less Than or Equal To 'n1 <= n2' = " << (n1 <= n2) << endl;
	
	//Greater Than or Equal To Operator
	cout << "Greater Than or Equal To 'n1 >= n2' = " << (n1 >= n2) << endl;

	cout << endl;
	cout << "Logical Operators - 0 == false - 1 == true" << endl;
	cout << endl;

	//AND Operator
	cout << "AND 'n1 && n2' = " << (n1 && n2) << endl;

	//OR Operator
	cout << "OR 'n1 || n2' = " << (n1 || n2) << endl;

	//NOT Operator
	cout << "NOT '!(n1 && n2)' = " << !(n1 && n2) << endl;
	
	//Assignment Operator
	cout << endl;
	cout << "Assignment Operators" << endl;
	cout << endl;

	n1 = 20;
	n2 = 10;

	//Simple Assignment
	result = n1;
	cout << "Simple Assignment 'result = n1' result= " << result << endl;

	//Add AND Assignment
	n1 += n2;
	cout << "Add AND Assignment 'n1 += n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	//Subtract AND Assignment
	n1 -= n2;
	cout << "Subtract AND Assignment 'n1 -= n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	//Divide AND Assignment
	n1 /= n2;
	cout << "Divide AND Assignment 'n1 /= n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	//Modulus AND Assignment
	n1 %= n2;
	cout << "Modulus AND Assignment 'n1 %= n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	//Left Shift AND Assignment
	n1 <<= n2;
	cout << "Left Shift AND Assignment 'n1 <<= n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	//Right Shift AND Assignment
	n1 >>= n2;
	cout << "Right Shift AND Assignment 'n1 >>= n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	//Bitwise AND Assignment
	n1 &= n2;
	cout << "Bitwise AND Assignment 'n1 &= n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	//Bitwise Exculive OR AND Assignment
	n1 ^= n2;
	cout << "Bitwise Exculive OR AND Assignment 'n1 ^= n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	//Bitwise Inclusive OR AND Assignment
	n1 |= n2;
	cout << "Bitwise Inclusive OR AND Assignment 'n1 |= n2' n1= " << n1 << endl;
	n1 = 20;
	n2 = 10;

	system("pause");
	return 0;
}