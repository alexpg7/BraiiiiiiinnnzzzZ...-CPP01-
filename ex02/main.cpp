#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "Adress of string: \t\t" << &string << std::endl;
	std::cout << "Adress held by stringPTR: \t" << stringPTR << std::endl;
	std::cout << "Adress held by stringREF: \t" << &stringREF << std::endl;

	std::cout << "Value of string: \t\t" << string << std::endl;
	std::cout << "Value pointed by stringPTR: \t" << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: \t" << stringREF << std::endl;
}
