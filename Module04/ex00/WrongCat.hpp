/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:57:03 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 16:16:35 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WrongCAT_HPP
# define WrongCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &cp);
		WrongCat& operator=(const WrongCat &cp);

	void makeSound() const;
};

# endif
