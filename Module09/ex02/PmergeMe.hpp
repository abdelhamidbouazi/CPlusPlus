# ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <map>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:
		std::vector<int>	V;
		std::deque<int>		D;
	public:
		PmergeMe();
		void	execute(char **av);
		void	SortV(std::vector<int> &Vec);
		void	SortD(std::deque<int> &Deq);

		~PmergeMe();
};

# endif
