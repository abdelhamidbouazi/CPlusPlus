/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:48:19 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 13:52:31 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WrongANIMAL_HPP
# define WrongANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string _type);
		WrongAnimal(const WrongAnimal &cp);
		WrongAnimal& operator=(const WrongAnimal &cp);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

# endif
