#include <iostream>
#include <fstream>

std::string	ft_subsline(std::string line, std::string s1, std::string s2)
{
	std::string	ret;
	int			i;
	size_t		pos;
	size_t		len;

	len = s1.length();
	while (line[i])
	{
		pos = line.find(s1, i + 0);
		if (i == pos)
		{
			ret += s2;
			i = i + len - 1;
		}
		else
			ret += line[i];
		i++;
	}
	return (ret);
}

void	ft_subs(std::ifstream &input, std::ofstream &output, std::string s1, std::string s2)
{
	std::string	line;

	while (1)
	{
		if (!getline(input, line))
			return ;
		line = ft_subsline(line, s1, s2);
		output << line << std::endl;
	}
}

int	ft_replace(std::string filename, std::string s1, std::string s2)
{
	std::string	read;

	std::ifstream	input(filename);
	std::ofstream	output(filename + ".replace");
	if (input.good() == 0)
		return (-1);
	if (output.good() == 0)
		return (-2);
	ft_subs(input, output, s1, s2);
	output.close();
	return (0);
}

int	main(int narg, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	int			ret;

	if (narg == 4)
	{
		filename = std::string(argv[1]);
		s1 = std::string(argv[2]);
		s2 = std::string(argv[3]);
		ret = ft_replace(filename, s1, s2);
		if (ret == -1)
		{
			std::cout << "Error reading input file." << std::endl;
			return (1);
		}
		else if (ret == -2)
		{
			std::cout << "Error reading output file." << std::endl;
			return (1);
		}
	}
	else
	{
		std::cerr << "Please, use 3 parameters: file, string1, string2" << std::endl;
		return (1);
	}
	return (0);
}
