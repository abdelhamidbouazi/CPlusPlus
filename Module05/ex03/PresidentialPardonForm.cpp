/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:24 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/13 16:26:27 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string	t) : AForm("PresidentialPardonForm", 25, 5), target(t)
{
	// std::cout << target << "-----PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cp)
{
	(void)cp;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cp)
{
	(void)cp;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getExecGrade() <  executor.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	else {
		std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
}
