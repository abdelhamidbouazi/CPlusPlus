/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:56:53 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 16:17:41 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->type <<": constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cp) : WrongAnimal(cp)
{
	*this = cp;
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &cp)
{
	if (this != &cp)
		WrongAnimal::operator=(cp);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << this->type <<": destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "MEOW MEOW MEOW!" << std::endl;
}

# endif
