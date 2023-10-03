/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:24:08 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/07 03:22:46 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string	name = "Abdelhamid";
	Zombie*		z = zombieHorde(10, name);

	for (int i = 0; i < 10; i++)
	{
		z[i].announce();
	}

	delete[] z;
	return	0;
}
