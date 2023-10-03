/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 04:38:01 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 16:22:26 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	setHp(100);
	setEp(50);
	setAd(20);
    std::cout << "ScavTrap " << name << "'s constructor !!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
	*this = cpy;
	std::cout << "ScavTrap : Copy contructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	if (this != &cpy) {
        ClapTrap::operator=(cpy);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << "'s destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getEp() <= 0)
	{
		std::cout << "Out Of Energy !!!!!!!!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap: " << getName() << ", attacks the " << target << ", and it is causing " << getAd() << " points of damage!." << std::endl;
	setEp(-1);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << getName() << " is now in Gate keeper mode." << std::endl;
}
