/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:26:13 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/07 03:26:27 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	Name;
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void zombieName(std::string	nm);
};

Zombie* zombieHorde( int N, std::string name );

# endif
