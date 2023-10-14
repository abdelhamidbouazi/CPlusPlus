#include "PmergeMe.hpp"

int main(int ac, char **av){
	if (ac < 2)
	{
		std::cout << "Error: to few arguments" << std::endl;
		return 1;
	}
	try {
		PmergeMe P;
		P.execute(av);
	}
	catch (const char *e){
		std::cerr << e << std::endl;
	}
}
