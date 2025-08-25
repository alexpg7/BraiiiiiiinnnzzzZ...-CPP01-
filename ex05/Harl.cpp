#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::_debug()
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void	Harl::_info()
{
	std::cout << "I cannot believe adding extra bacon costs more money ";
	std::cout << "You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "ve been coming for years, ";
	std::cout << "whereas you started working here just last month." << std::endl;
}

void	Harl::_error()
{
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	int i = 0;

	void (Harl::*functions[]) (void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	std::string	_levels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};


	while (i < 4)
	{
		if (level == _levels[i])
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
	std::cout << "I cannot complain about " << level << std::endl;;
}
