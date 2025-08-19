#include <iostream>
#include <fstream>

void	ft_replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	input(filename);
	std::ofstream	output(filename + ".replace");
	output << "Hola";
	output.close();
}

int	main(int narg, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (narg == 4)
	{
		filename = std::string(argv[1]);
		s1 = std::string(argv[2]);
		s2 = std::string(argv[3]);
		ft_replace(filename, s1, s2);
	}
	else
	{
		std::cerr << "Please, use 3 parameters: file, string1, string2" << std::endl;
		return (1);
	}
	return (0);
}
