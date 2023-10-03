/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 02:35:38 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 04:32:24 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string _name) : Name(_name), hitPts(10), energyPts(10), attackDamage(0)
{
	std::cout << Name << " Born !!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
	*this = cp;
	std::cout << "Copy contructor called" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cp)
{
	this->Name = cp.Name;
	this->hitPts = cp.hitPts;
	this->energyPts = cp.energyPts;
	this->attackDamage = cp.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

//	Attack, Damage and repair

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << attackDamage << " points of damage!." << std::endl;
	energyPts -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPts)
	{
		hitPts -= amount;
		std::cout << "ClapTrap " << Name << " DEAD." << std::endl;
		return;
	}
	else
	{
		hitPts -= amount;
		std::cout << "ClapTrap " << Name << " takes " << amount << " damage." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPts <= 0)
	{
		std::cout << "Out Of Energy !!!" << std::endl;
		return ;
	}
	energyPts -= 1;
	hitPts += amount;
}

