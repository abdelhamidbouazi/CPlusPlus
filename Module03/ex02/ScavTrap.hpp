/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 04:36:31 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 16:22:42 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap& operator=(const ScavTrap& cpy);
		~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
};

# endif
