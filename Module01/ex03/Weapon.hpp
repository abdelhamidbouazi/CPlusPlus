/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 03:04:57 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/09 03:42:06 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon();
		Weapon(std::string _type);
		~Weapon();
		const	std::string	getType();
		void	setType(std::string	_type);
};

# endif
