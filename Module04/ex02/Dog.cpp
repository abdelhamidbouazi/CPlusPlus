/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:49:49 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/25 14:39:23 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	(this->brain = new Brain()) ? (std::cout << this->type <<": constructor called" << std::endl) : (std::cout << "Memory allocation failed" << std::endl);
}

Dog::~Dog()
{
	std::cout << this->type <<": destructor called" << std::endl;
	delete	this->brain;
}

Dog::Dog(const Dog &cp) : AAnimal(cp)
{
	*this = cp;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &cp)
{
	if (this != &cp)
    {
        this->type = cp.type;
        this->brain = new Brain( *cp.brain );
    }
    return *this;
}

void Dog::makeSound() const
{
	std::cout << "HAW HAW HAW!" << std::endl;
}
