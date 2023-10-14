#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2)
	{
		std::cout << "Error: Invalid Arguments" << std::endl;
		return 1;
	}
	RPN r;
	r.Solver(av[1]);
	return 0;
}
