/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:50:05 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/25 14:21:54 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Contructor Called"<< std::endl;
}

Brain::Brain(const Brain& cp)
{
	*this = cp;
	std::cout << "Brain: Copy Contructor Called"<< std::endl;
}

Brain& Brain::operator=(const Brain& cp)
{
	std::cout << "Brain: Destructor Called"<< std::endl;
	if (this != &cp)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = cp.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor Called"<< std::endl;
}

