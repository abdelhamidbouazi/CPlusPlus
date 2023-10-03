/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:49:49 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 16:07:24 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->type <<": constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type <<": destructor called" << std::endl;
}

Dog::Dog(const Dog &cp) : Animal(cp)
{
	*this = cp;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &cp)
{
	if (this != &cp)
		Animal::operator=(cp);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "HAW HAW HAW!" << std::endl;
}
