/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:38:12 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/10 23:45:34 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{};
		MutantStack(const MutantStack &other)
		{
			*this = other;
		};
		MutantStack &operator=(const MutantStack &other)
		{
			if(this != &other)
				this->c = other.c;
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		reverse_iterator rbegin() {return this->c.rbegin();}
		reverse_iterator rend() {return this->c.rend();}

		~MutantStack() {};
};


# endif
