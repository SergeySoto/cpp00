#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	/*for (int i = 1; i < argc; ++i)
	{
		for (int j = 0; argv[i][j]; ++j)
			std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << std::endl;*/
	for (int i = 1; i < argc; ++i)
	{
		std::string Result(argv[i]);
		std::transform(Result.begin(), Result.end(), Result.begin(), ::toupper);
		std::cout << Result;
	}
	std::cout << std::endl;
	return 0;
}
