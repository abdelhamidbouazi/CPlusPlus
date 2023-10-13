# ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <map>

class PmergeMe
{
	private:
		std::vector<int> V;
		std::deque<int> D;
	public:
		// PmergeMe(char **av);
		PmergeMe();
		void	execute(char **av);
		void	SortV( std::vector<int> &Vec);
		void	SortD(std::vector<int> &Vec);
		// void	SortD(std::vector<int> &Vec);
		void	MergeD(std::deque<int> Deq);
		~PmergeMe();
};

# endif
