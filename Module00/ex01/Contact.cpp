/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:00:47 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/03 01:16:09 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <fstream>
#include <string>
#include <iostream>
#include <string>


Contact::Contact()
{
	std::cout << "contructor called" << std::endl;
}

Contact::~Contact()
{
}

void Contact::starter(void){
	std::string		fName;
	std::string		lName;
	std::string		nName;
	std::string		pNumber;
	std::string		dSecret;
	bool			done = false;

	while (done == false){
	std::cout << "~Enter First Name : " << std::flush;
	getline(std::cin, fName);
	std::cout << "~Enter Last Name : " << std::flush;
	getline(std::cin, lName);
	std::cout << "~Enter Nickname : " << std::flush;
	getline(std::cin, nName);
	std::cout << "~Enter Phone Number : " << std::flush;
	getline(std::cin, pNumber);
	std::cout << "~Enter Darkest Secret : " << std::flush;
	getline(std::cin, dSecret);
	if (!fName.empty() && !lName.empty() && !nName.empty() && !pNumber.empty() && !dSecret.empty()) {
		this->firstName = fName;
		this->lastName = lName;
		this->nickName = nName;
		this->phoneNumber = pNumber;
		this->darkestSecret = dSecret;
		std::cout << "~Contact Added Succefully"<< std::endl;
		done = true;
	} else
		std::cout << "~Error: Please fill all fields"<< std::endl;
	}
}


std::string spaces(int n) {
    std::string result = "";
    for (int i = 0; i < n; i++) {
        result += " ";
    }
    return result;
}
// here I will print search
int	Contact::print(int i)
{
	if (!this->firstName.empty()){
		std::cout << "-   " << ( i + 1) << "   | ";
		std::cout << ( this->firstName.length() > 10 ? this->firstName.substr(0, 8) + "." : this->firstName );
		std::cout << spaces((10 - this->firstName.length()));
		std::cout << " | ";
		std::cout << ( this->lastName.length() > 10 ? this->lastName.substr(0, 8) + "." : this->lastName );
		std::cout << spaces((9 - this->lastName.length()));
		std::cout << " | ";
		std::cout << ( this->nickName.length() > 10 ? this->nickName.substr(0, 8) + "." : this->nickName );
		std::cout << spaces((11 - this->nickName.length()));
		std::cout << "-" << std::endl;
		return 0;
	}
	else
		return 1;
}

// here I will print search by index
void	Contact::printSpecific()
{
	if (!this->firstName.empty()){
		std::cout << this->firstName << std::endl;
		std::cout << this->lastName << std::endl;
		std::cout << this->nickName << std::endl;
		std::cout << this->phoneNumber << std::endl;
		std::cout << this->darkestSecret << std::endl;
	}
	else
		std::cout << "~No data" << std::endl;
}

