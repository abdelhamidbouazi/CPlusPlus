/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:25:07 by abouazi           #+#    #+#             */
/*   Updated: 2023/08/26 16:52:52 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	// if(!(this->brain = new Brain()))
	// 	return;
	// std::cout << "Memory allocation failed" << std::endl;
	try {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Cat::~Cat()
{
	std::cout << this->type <<": destructor called" << std::endl;
	delete	this->brain;
}

Cat::Cat(const Cat &cp) : AAnimal(cp)
{
	*this = cp;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &cp)
{
	if (this != &cp)
    {
        this->type = cp.type;
        this->brain = new Brain( *cp.brain );
    }
    return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW MEOW!" << std::endl;
}

