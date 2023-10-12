#include "PmergeMe.hpp"

int main(int ac, char **av){
	try {
		PmergeMe P;
		(void)ac;
		P.execute(av);
	}
	catch (const char *e){
		std::cerr << e << std::endl;
	}
}
