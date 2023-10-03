/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:27:13 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 15:52:35 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Tier")
{
	std::cout << this->type <<": constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << this->type <<": constructor called" << std::endl;
}

Animal::Animal(const Animal &cp)
{
	*this = cp;
	std::cout << this->type <<": copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal &cp)
{
	if (this != &cp)
		this->type = cp.type;
	std::cout << this->type <<": copy assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << this->type <<": destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout  <<"Sound of Animal called" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
