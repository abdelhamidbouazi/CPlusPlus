/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:19 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/13 16:33:11 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string	t) : AForm("ShrubberyCreationForm", 145, 137), target(t)
{
	// std::cout << "ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp) : AForm(cp), target(cp.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cp)
{
	(void)cp;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getExecGrade() <  executor.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	else if (getIsSigned() != true) {
		throw AForm::FormNotSigned();
	}

	std::ofstream file (target + "_shrubbery");
	file << "   ^   " << std::endl;
    file << "  ^^^  " << std::endl;
    file << " ^^^^^ " << std::endl;
    file << "^^^^^^^" << std::endl;
    file << "   |   " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
