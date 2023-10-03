/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:25:07 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 15:58:36 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->type <<": constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type <<": destructor called" << std::endl;
}
Cat::Cat(const Cat &cp) : Animal(cp)
{
	*this = cp;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &cp)
{
	if (this != &cp)
		Animal::operator=(cp);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW MEOW!" << std::endl;
}

