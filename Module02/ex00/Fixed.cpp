/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:44:50 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/18 14:06:44 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called"<< std::endl;
	fixePointValue = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called"<< std::endl;
}

Fixed::Fixed( const Fixed &cp ){
	std::cout << "Copy constructor called"<< std::endl;
	*this = cp;
}

Fixed& Fixed::operator=( const Fixed &op ){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixePointValue = op.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixePointValue);
}

void	Fixed::setRawBits( int const raw ){
	this->fixePointValue = raw;
}


