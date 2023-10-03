/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:01:42 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 16:47:21 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	setHp(100);
	setEp(100);
	setAd(30);
    std::cout << "FragTrap " << name << "'s constructor !!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
	*this = cpy;
	std::cout << "FragTrap : Copy contructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& Fcpy)
{
	if (this != &Fcpy) {
        ClapTrap::operator=(Fcpy);
    }
    return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap ->" << getName() << " destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (getEp() <= 0)
	{
		std::cout << "Out Of Energy !!!!!!!!" << std::endl;
		return ;
	}
	std::cout << "FragTrap: " << getName() << ", attacks the " << target << ", and it is causing " << getAd() << " points of damage!." << std::endl;
	setEp(-1);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << getName() << "high fives all traps" << std::endl;
}
