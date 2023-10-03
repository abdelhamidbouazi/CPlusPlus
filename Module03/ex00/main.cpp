/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 02:34:27 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 04:30:18 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	c("Ahmed");
	ClapTrap	a("");

	a = c;

	a.attack("You");
	a.takeDamage(5);
	a.takeDamage(5);

	a.beRepaired(15);
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
a.takeDamage(5);
	a.takeDamage(5);

	return 0;
}
