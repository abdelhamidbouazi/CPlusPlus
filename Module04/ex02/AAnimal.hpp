/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:22:28 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/25 14:56:13 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>


class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string _type);
		AAnimal(const AAnimal &cp);
		AAnimal& operator=(const AAnimal &cp);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

# endif
