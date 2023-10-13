// #include "PmergeMe.hpp"


// PmergeMe::PmergeMe(/* args */)
// {
// }

// PmergeMe::~PmergeMe()
// {
// }

// void PmergeMe::execute(char **av)
// {
// 	int	i = 1;
// 	while (av[i])
// 	{
// 		if (std::atoi(av[i]) < 0)
// 			throw "Error";
// 		else {
// 			this->V.push_back(std::atoi(av[i]));
// 			this->D.push_back(std::atoi(av[i]));
// 			// Push to D ----
// 		}
// 		// std::cout << D.back() << std::endl;
// 		i++;
// 	}
// 	std::cout << "Before: ";
// 	for (size_t i = 0; i < V.size(); i++){
// 		std::cout << V[i] << " ";
// 	}
// 	std::cout << std::endl;
// 	std::cout << "After: ";
// 	// SortV(this->V);
// 	// for(size_t i = 0; i < V.size() ; i++)
// 	// {
// 	// 	std::cout << V[i] << " " ;
// 	// }
// 	MergeD(this->D);
// }

// void PmergeMe::SortV( std::vector<int> &Vec)
// {
// 	std::map<int, int>	_m;
// 	std::vector<int>	_v;
// 	int u = -1;

// 	if(Vec.size() <= 3)
// 	{
// 		std::sort(Vec.begin(), Vec.end());
// 		return ;
// 	}
// 	size_t size;
// 	if(Vec.size() % 2 == 0)
// 		size = Vec.size();
// 	else
// 	{
// 		size = Vec.size() - 1;
// 		u = Vec[size];
// 	}

// 	for(size_t i = 0; i < size - 1; i+=2)
// 	{
// 		if(Vec[i] > Vec[i + 1])
// 		{
// 			_v.push_back(Vec[i]);
// 			_m[Vec[i]] = Vec[i+1];
// 		}
// 		else
// 		{
// 			_v.push_back(Vec[i+ 1]);
// 			_m[Vec[i+1]] = Vec[i];
// 		}

// 	}

// 	SortV(_v);
// 	Vec.clear();
// 	Vec.assign(_v.begin(), _v.end());
// 	// std::vector<int>::iterator it;
// 	for(size_t i = 0; i < _v.size(); i++)
// 	{
// 		std::vector<int>::iterator  it = std::upper_bound(Vec.begin(), (Vec.begin() + 2 * i), _m[_v[i]]);
// 		Vec.insert(it, _m[_v[i]]);
// 	}

// 	if(u != -1)
// 	{
// 		std::vector<int>::iterator  it = std::upper_bound(Vec.begin(), Vec.end(), u);
// 		Vec.insert(it, u);
// 	}
// }

// void PmergeMe::SortD(std::deque<int> &Deq)
// {
// 	std::map<int, int>	_m;
// 	std::vector<int>	_v;
// 	int u = -1;

// 	if(Deq.size() <= 3)
// 	{
// 		std::sort(Deq.begin(), Deq.end());
// 		return ;
// 	}
// 	size_t size;
// 	if(Deq.size() % 2 == 0)
// 		size = Deq.size();
// 	else
// 	{
// 		size = Deq.size() - 1;
// 		u = Deq[size];
// 	}

// 	for(size_t i = 0; i < size - 1; i+=2)
// 	{
// 		if(Deq[i] > Deq[i + 1])
// 		{
// 			_v.push_back(Deq[i]);
// 			_m[Deq[i]] = Deq[i+1];
// 		}
// 		else
// 		{
// 			_v.push_back(Deq[i+ 1]);
// 			_m[Deq[i+1]] = Deq[i];
// 		}

// 	}

// 	SortV(_v);
// 	Deq.clear();
// 	Deq.assign(_v.begin(), _v.end());
// 	// std::Deqtor<int>::iterator it;
// 	for(size_t i = 0; i < _v.size(); i++)
// 	{
// 		std::vector<int>::iterator  it = std::upper_bound(Deq.begin(), (Deq.begin() + 2 * i), _m[_v[i]]);
// 		Deq.insert(it, _m[_v[i]]);
// 	}

// 	if(u != -1)
// 	{
// 		std::vector<int>::iterator  it = std::upper_bound(Deq.begin(), Deq.end(), u);
// 		Deq.insert(it, u);
// 	}
// }
#include<deque>
#include<vector>
#include<iostream>

// void merge(std::deque<int> &deq, int l, int mid, int r)
// {
// 	size_t i = l;
// 	size_t j = mid;
// 	size_t k = l;
// 	std::vector<int> arr1;
// 	std::vector<int> arr2;
// 	// std::cout << u << std::endl;
// 	while (i < mid){
// 		arr1.push_back(deq[i]);
// 		i++;
// 	}
// 	std::cout << "\n";
// 	while (j < r){
// 		arr2.push_back(deq[j]);
// 		j++;
// 	}
// 	i = 0;
// 	j = 0;
// 	while(i < arr1.size() && j < arr2.size()) {
// 		if (arr1[i] > arr2[j]) {
// 			deq[k] = arr2[j];
// 			j++;
// 		}else {
// 			deq[k] = arr1[i];
// 			i++;
// 		}
// 		k++;
// 	}
// 	while(i < arr1.size()) {
// 		deq[k] = arr1[i];
// 		i++;
// 		k++;
// 	}
// 	while(j < arr2.size()) {
// 		deq[k] = arr2[j];
// 		j++;
// 		k++;
// 	}
// }
//  void merge_sort(std::deque<int> &deq, int l, int r)
// {
// 	if (r - l < 2){
// 		return;
// 	}
// 	int mid = ((r + l))/2;
// 	merge_sort(deq, l, mid);
// 	merge_sort(deq, mid, r);
// 	merge(deq, l, mid, r);
// }

int main(){
	std::deque<int> deq;
	deq.push_back(12);
	deq.push_back(14);
	deq.push_back(11);
	deq.push_back(19);
	deq.push_back(24);
	deq.push_back(3);
	deq.push_back(4);
	deq.push_back(7);

	merge_sort(deq, 0, deq.size());
	for (int i = 0; i < deq.size(); i++)
		std::cout  << deq[i] << " ";
}
