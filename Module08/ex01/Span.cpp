/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:10:12 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/10 19:21:13 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other){
		this->N = other.N;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (s.size() == this->N)
		throw (std::out_of_range("Vector is Full"));
	s.push_back(n);
}

int Span::shortestSpan()
{
	if (s.size() == 0 || s.size() == 1)
		throw std::length_error("Please add more spans to find out the shrotest span");
    sort(s.begin(), s.end());
    int res = s[1] - s[0];
    for (size_t i = 1; i < s.size() - 1; i++)
		if((s[i + 1] - s[i]) < res)
			res = s[i + 1] - s[i];
    return res;
}

int Span::longestSpan()
{
	int res;

	if (s.size() == 0 || s.size() == 1)
		throw std::length_error("Please add more spans to find out the longest span");
    sort(s.begin(), s.end());
	res = s[s.size() -1] - s[0];
	return res;
}

void Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (s.size() + std::distance(begin, end) > this->N)
		throw std::length_error("Span is out of range");
	s.insert(s.begin(), begin, end);
}
