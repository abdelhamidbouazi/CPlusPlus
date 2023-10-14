#include "PmergeMe.hpp"

int main(int ac, char **av){
	try {
		PmergeMe P;
		(void)ac;
		P.execute(av);

		// std::deque<int> deq;
		// deq.push_back(12);
		// deq.push_back(14);
		// deq.push_back(11);
		// deq.push_back(19);
		// deq.push_back(24);
		// deq.push_back(3);
		// deq.push_back(4);
		// deq.push_back(7);

		// merge_sort(deq, 0, deq.size());
		// for (size_t i = 0; i < deq.size(); i++)
		// 	std::cout << deq[i] << " ";
	}
	catch (const char *e){
		std::cerr << e << std::endl;
	}
}
