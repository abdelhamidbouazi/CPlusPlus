/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:53:56 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/03 00:20:16 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"


class PhoneBook
{
	private:
		Contact		_contact[8];
		int			index;
	public:
		PhoneBook();
		~PhoneBook();
		void	prompt(void);
		void	addContact();
		void 	search();
		void	searchContact();
};

# endif
