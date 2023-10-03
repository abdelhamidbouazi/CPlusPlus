/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 03:45:00 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/09 04:01:28 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	_name)
{
	this->name = _name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon&	_weapon){
	this->weapon = &_weapon;
}

void HumanB::attack(){
	if (this->weapon->getType() != "") {
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	}
	else {
		std::cout << this->name << " attacks with their " << "no weapon !" << std::endl;
	}
}
