/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:40:24 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/16 14:18:28 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &cp)
{
	*this = cp;
}

Intern &Intern::operator=(const Intern &cp)
{
	(void)cp;
	return *this;
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm* aform[] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	std::string formsNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	for (int i = 0; i <= 2; i++) {
		if (name == formsNames[i]) {
			std::cout <<  "Intern creates" << name << std::endl;
			return aform[i];
		}
	}
	std::cout << "the form does not exist" << std::endl;
	return nullptr;
}
