/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:46:03 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/25 14:34:18 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain& cp);
		Brain& operator=(const Brain& cp);
		~Brain();
};

# endif
