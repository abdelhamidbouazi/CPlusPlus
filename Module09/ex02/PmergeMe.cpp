#include "PmergeMe.hpp"

PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::execute(char **av)
{
	int i = 1;
	while (av[i])
	{
		if (std::atoi(av[i]) < 0)
			throw "Error";
		else
		{
			this->V.push_back(std::atoi(av[i]));
			this->D.push_back(std::atoi(av[i]));
		}
		// std::cout << D.back() << std::endl;
		i++;
	}
	std::cout << "Before: ";
	for (size_t i = 0; i < V.size(); i++)
	{
		std::cout << V[i] << " ";
	}
	std::cout << "\nAfter: ";
	clock_t calculatedTimeV, calculatedTimeD;
	calculatedTimeV = clock();
	SortV(this->V);
	calculatedTimeV = clock() - calculatedTimeV;
	calculatedTimeD = clock();
	SortD(this->D);
	calculatedTimeD = clock() - calculatedTimeD;
	for (size_t i = 0; i < D.size(); i++)
	{
		std::cout << V[i] << " ";
		// if(D[i] != V[i])
		// {
		// 	std::cout<< "errr" << std::endl;
		// }
	}
	std::cout << "\nTime to process a range of " << V.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) <<  ((float)calculatedTimeV * 1000000)/CLOCKS_PER_SEC << " us" << std::endl;
	std::cout << "Time to process a range of " << V.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) <<  ((float)calculatedTimeD * 1000000)/CLOCKS_PER_SEC << " us" << std::endl;
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
			_m.insert(std::pair<int,int>(Vec[i], Vec[i+1]));
			// _m[Vec[i]] = Vec[i+1];
		}
		else
		{
			_v.push_back(Vec[i+ 1]);
			_m.insert(std::pair<int,int>(Vec[i + 1], Vec[i]));

			// _m[Vec[i+1]] = Vec[i];
		}

	}

	SortV(_v);
	Vec.clear();
	Vec.assign(_v.begin(), _v.end());
	for(size_t i = 0; i < _v.size(); i++)
	{
		std::multimap<int, int>::iterator tt = _m.find(_v[i]);
		if(tt != _m.end())
		{
			std::vector<int>::iterator  it = std::upper_bound(Vec.begin(), (Vec.begin() + 2 * i), tt->second);
			Vec.insert(it, tt->second);
		}
	}

	if(u != -1)
	{
		std::vector<int>::iterator  it = std::upper_bound(Vec.begin(), Vec.end(), u);
		Vec.insert(it, u);
	}
}
void PmergeMe::SortD( std::deque<int> &Deq)
{
	std::multimap<int, int>	_m;
	std::deque<int>	_d;
	int u = -1;

	if(Deq.size() <= 3)
	{
		std::sort(Deq.begin(), Deq.end());
		return ;
	}
	size_t size;
	if(Deq.size() % 2 == 0)
		size = Deq.size();
	else
	{
		size = Deq.size() - 1;
		u = Deq[size];
	}

	for(size_t i = 0; i < size - 1; i+=2)
	{
		if(Deq[i] > Deq[i + 1])
		{
			_d.push_back(Deq[i]);
			_m.insert(std::pair<int,int>(Deq[i], Deq[i+1]));
			// _m[Deq[i]] = Deq[i+1];
		}
		else
		{
			_d.push_back(Deq[i+ 1]);
			_m.insert(std::pair<int,int>(Deq[i + 1], Deq[i]));

			// _m[Deq[i+1]] = Deq[i];
		}

	}

	SortD(_d);
	Deq.clear();
	Deq.assign(_d.begin(), _d.end());
	for(size_t i = 0; i < _d.size(); i++)
	{
		std::multimap<int, int>::iterator tt = _m.find(_d[i]);
		if(tt != _m.end())
		{
			std::deque<int>::iterator  it = std::upper_bound(Deq.begin(), (Deq.begin() + 2 * i), tt->second);
			Deq.insert(it, tt->second);
		}
	}

	if(u != -1)
	{
		std::deque<int>::iterator  it = std::upper_bound(Deq.begin(), Deq.end(), u);
		Deq.insert(it, u);
	}
}
