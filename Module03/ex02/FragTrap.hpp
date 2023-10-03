/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 05:31:00 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/21 16:29:05 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(std::string _name);
		FragTrap(const FragTrap &cpy);
		FragTrap& operator=(const FragTrap& Fcpy);
		~FragTrap();

		void highFivesGuys(void);
		void attack(const std::string& target);
};

# endif
