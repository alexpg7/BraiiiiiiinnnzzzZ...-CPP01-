#include "Zombie.hpp"

int	main(void)
{
	//Borns
	Zombie	zom1("Zom1");
	//Announces
	zom1.announce();

	//Borns
	Zombie	*zom2 = newZombie("Zom2");
	//Announces
	zom2->announce();
	//This zombie is allocated in the heap, so it must be freed
	delete zom2;

	//Borns, announces and dies
	randomChump("Zom3");

	//Zom1 announces once more
	zom1.announce();

	//all die
	return (0);
}
