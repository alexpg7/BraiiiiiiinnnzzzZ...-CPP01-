#include "Zombie.hpp"

int	main(void)
{
	//Borns
	Zombie	zom1("Zom1");
	//Announces
	zom1.announce();

	//Create horde
	Zombie *horde = zombieHorde(3, "Zombie");
	horde[0].announce();
	delete[] horde;
	return (0);
}
