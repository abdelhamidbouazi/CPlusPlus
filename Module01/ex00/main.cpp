/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:24:08 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/05 03:51:36 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string	n;
	std::string	n1 = "Foo";
	std::string	n2 = "Abdelhamid";

	std::cout << "Enter The zombie name: " << std::flush;
	std::cin >> n;
	Zombie	z(n);
	z.announce();

 	Zombie* zptr = z.newZombie(n1);
	delete zptr;
	randomChump(n2);

	return	0;
}
