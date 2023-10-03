/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 02:34:27 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 16:45:52 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	a("Abdelhamid");
	ScavTrap	b("Bouazi");
	FragTrap	c("Opus");
	FragTrap	f(c);

	c = f;


	c.highFivesGuys();
	c.attack("test");

	return 0;
}
