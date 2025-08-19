#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name)
{
	return ;
}

Zombie::Zombie()
{
	_name = "Unnamed";
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << " has been destroyed!" << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setname(std::string name)
{
	_name = name;
	return ;
}
