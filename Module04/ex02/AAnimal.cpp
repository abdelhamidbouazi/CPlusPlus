/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:27:13 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/25 14:36:48 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Tier")
{
	std::cout << this->type <<": constructor called" << std::endl;
}

AAnimal::AAnimal(std::string _type) : type(_type)
{
	std::cout << this->type <<": constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cp)
{
	*this = cp;
	std::cout << this->type <<": copy constructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &cp)
{
	if (this != &cp)
		this->type = cp.type;
	std::cout << this->type <<": copy assignment operator called" << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << this->type <<": destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout  <<"Sound of AAnimal called" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->type;
}
