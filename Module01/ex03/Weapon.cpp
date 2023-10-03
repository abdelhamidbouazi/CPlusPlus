/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 03:09:16 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/09 03:55:16 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}
Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

Weapon::~Weapon()
{
}

const std::string	Weapon::getType(){
	return (this->type);
}

void	Weapon::setType(std::string	_type){
	this->type = _type;
}

