#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "He DEBUGS:" << std::endl;
	harl.complain("debug");
	std::cout << std::endl;

	std::cout << "He INFORMS:" << std::endl;
	harl.complain("info");
	std::cout << std::endl;

	std::cout << "He WARNS:" << std::endl;
	harl.complain("warning");
	std::cout << std::endl;

	std::cout << "He ERRS:" << std::endl;
	harl.complain("error");
	std::cout << std::endl;

	std::cout << "No more complains:" << std::endl;
	harl.complain("42");
	std::cout << std::endl;
	return (0);
}
