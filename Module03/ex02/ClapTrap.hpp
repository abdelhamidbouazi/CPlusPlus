/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 02:35:46 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 05:25:51 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		Name;
		unsigned int	hitPts;
		unsigned int	energyPts;
		unsigned int	attackDamage;

	public:
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &cp);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& cp);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


		void setHp(unsigned int hp);
		void setEp(unsigned int ep);
		void setAd(unsigned int ad);

		unsigned int getHp();
		unsigned int getEp();
		unsigned int getAd();

		std::string getName();

};



# endif
