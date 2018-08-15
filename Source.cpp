#include <iostream>

int main()
{
	int number;
	int anotherNumber;

	number = 109;
	anotherNumber = 27;

	std::cout << number << std::endl;
	std::cout << anotherNumber << std::endl;
	std::cout << std::endl;

	int sum;
	sum = number + anotherNumber;
	std::cout << sum << std::endl;

	int decimal;
	int anotherDecimal;
	decimal = 0.2;
	anotherDecimal = 0.6;

	int add;
	add = decimal + anotherDecimal;
	std::cout << add << std::endl;
	std::cout << std::endl;

	//Entering Numbers

	//Number 1
	int Number1;
	std::cout << "Enter a Number" << std::endl;
	std::cin >> Number1;
	std::cout << std::endl;

	//Number 2
	int Number2;
	std::cout << "Enter another Number" << std::endl;
	std::cin >> Number2;
	std::cout << std::endl;

	//Adding the Numbers
	int sum2;
	sum2 = Number1 + Number2;

	//Sum of Numbers
	std::cout << "The sum of "  << Number1 << " and " << Number2 << " is " << sum2 << std::endl;
	std::cout << std::endl;

	system("pause");
	return 0;
}