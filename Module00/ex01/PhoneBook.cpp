/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:56:44 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/03 04:13:26 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{

}
void	PhoneBook::addContact()
{
	static int	i;
	this->_contact[i++ % 8].starter();
}

void	PhoneBook::prompt(void)
{
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "-        Hello this is your PhoneBook!        -"<<std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "- Please choose one of the following choices  -"<<std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "-                                             -"<<std::endl;
	std::cout << "-      ~>ADD        To add contact            -"<<std::endl;
	std::cout << "-                                             -"<<std::endl;
	std::cout << "-      ~>SEARCH     To search for a contact   -"<<std::endl;
	std::cout << "-                                             -"<<std::endl;
	std::cout << "-      ~>EXIT       To exit                   -"<<std::endl;
	std::cout << "-                                             -"<<std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << std::endl;
}

void	PhoneBook::searchContact()
{
	std::string	index;

	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "-                Contact List                 -" << std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "- index | First Name | Last Name | Nickname   -" << std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	for (int i = 0; i < 8 ; i++)
		this->_contact[i].print(i);
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout << "Select Contact index or '0' to exit Search mode"<<std::endl;
	getline(std::cin, index);
	if (!index.empty()) {
		switch (std::atoi(index.c_str())) {
			case 0:
				std::cout << "~EXIT SEARCH MODE" << std::endl;
				break ;
			case 1:
				this->_contact[0].printSpecific();
				break;
			case 2:
				this->_contact[1].printSpecific();
				break;
			case 3:
				this->_contact[2].printSpecific();
				break;
			case 4:
				this->_contact[3].printSpecific();
				break;
			case 5:
				this->_contact[4].printSpecific();
				break;
			case 6:
				this->_contact[5].printSpecific();
				break;
			case 7:
				this->_contact[6].printSpecific();
				break;
			case 8:
				this->_contact[7].printSpecific();
				break;
			default:
				std::cout << "~Error: Invalid index" << std::endl;
				break;
		}
	}
}
