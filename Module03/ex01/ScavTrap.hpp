/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 04:36:31 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 15:59:49 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
