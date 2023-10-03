/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:49:01 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/07 22:41:36 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string	n){
	Name = n;
}

Zombie::~Zombie(){
	std::cout << Name << ": Destroyed !!" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name) {
	Zombie*	z_ptr = new Zombie(name);
    return z_ptr;
}

void randomChump( std::string name ){
	Zombie zombie2(name);
	zombie2.announce();
}
