#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << _name << " was born" << std::endl;
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
