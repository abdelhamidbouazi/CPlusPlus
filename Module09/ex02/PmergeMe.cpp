#include "PmergeMe.hpp"


PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::execute(char **av)
{
	int	i = 1;
	while (av[i])
	{
		if (std::atoi(av[i]) < 0)
			throw "Error";
		else {
			this->V.push_back(std::atoi(av[i]));
			// Push to D ----
		}
		// std::cout << V.back() << std::endl;
		i++;
	}
	std::cout << "Before: ";
	for (size_t i = 0; i < V.size(); i++){
		std::cout << V[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "After: ";
	SortV(this->V);
	for(size_t i = 0; i < V.size() ; i++)
	{
		std::cout << V[i] << " " ;
	}
}

void PmergeMe::SortV( std::vector<int> &Vec)
{
	std::multimap<int, int>	_m;
	std::vector<int>	_v;
	int u = -1;

	if(Vec.size() <= 3)
	{
		std::sort(Vec.begin(), Vec.end());
		return ;
	}
	size_t size;
	if(Vec.size() % 2 == 0)
		size = Vec.size();
	else
	{
		size = Vec.size() - 1;
		u = Vec[size];
	}

	for(size_t i = 0; i < size - 1; i+=2)
	{
		if(Vec[i] > Vec[i + 1])
		{
			_v.push_back(Vec[i]);
			_m[Vec[i]] = Vec[i+1];
		}
		else
		{
			_v.push_back(Vec[i+ 1]);
			_m[Vec[i+1]] = Vec[i];
		}

	}

	SortV(_v);
	Vec.clear();
	Vec.assign(_v.begin(), _v.end());
	// std::vector<int>::iterator it;
	for(size_t i = 0; i < _v.size(); i++)
	{
		std::vector<int>::iterator  it = std::upper_bound(Vec.begin(), (Vec.begin() + 2 * i), _m[_v[i]]);
		Vec.insert(it, _m[_v[i]]);
	}

	if(u != -1)
	{
		std::vector<int>::iterator  it = std::upper_bound(Vec.begin(), Vec.end(), u);
		Vec.insert(it, u);
	}
}

