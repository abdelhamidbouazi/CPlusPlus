/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:50:08 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 13:56:06 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Falsches Tier")
{
	std::cout << this->type <<": constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
	std::cout << this->type <<": constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp)
{
	*this = cp;
	std::cout << this->type <<": copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &cp)
{
	if (this != &cp)
	{
		this->type = cp.type;
	}
	std::cout << this->type <<": copy assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type <<": destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout  <<"Sound of WrongAnimal called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
