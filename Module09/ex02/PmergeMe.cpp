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

	for(size_t i = 0; i < V.size() - 1 ; i++)
	{
		std::cout << V[i] << " " ;
	}
}

void PmergeMe::SortV( std::vector<int> &Vec)
{
	std::map<int, int>	_m;
	std::vector<int>		_v;
	int u = -1;

	if(Vec.size() <= 2)
	{
		
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

	for(size_t i = 0; i < size - 1; i++)
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
	std::vector<int>::iterator it;
	for(size_t i = 0; i < _v.size(); i++)
	{
		it = std::upper_bound(_v.begin(), _v.begin() + i, _m[_v[i]]);
		_v.insert(it, _m[_v[i++]]);
		// std::cout << _m[_v[i++]];
	}

	if(u != -1)
	{
		it = std::upper_bound(_v.begin(), _v.end(), u);
		_v.insert(it, u);
		u = -1;
	}
	Vec  = _v;
}
