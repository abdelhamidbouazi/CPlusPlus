/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:28:59 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/12 17:13:14 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Abdelhamid"), isSigned(false), signGrade(150), execGrade(1)
{
	std::cout << "Default Contructor Called" << std::endl;
}

AForm::AForm(const std::string nm, const int sg, const int eg) : name(nm), signGrade(sg), execGrade(eg)
{
	if (sg > 150 || eg > 150)
		throw AForm::GradeTooLowException();
	if (sg < 1 || eg < 1)
		throw AForm::GradeTooHighException();
	std::cout << "Params Contructor Called" << std::endl;
}

AForm::AForm(const AForm &cp) : name(cp.name), signGrade(cp.signGrade), execGrade(cp.execGrade)
{
	std::cout << "Copy Contructor Called" << std::endl;
}

AForm &AForm::operator=(const AForm &cp)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &cp)
		isSigned = cp.isSigned;
	return *this;
}

void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() >= this->signGrade)
		throw AForm::GradeTooLowException();
	this->isSigned = true;
}


std::ostream &operator<<(std::ostream &otsm, const AForm &fm)
{
	otsm << fm.getName() << "'s sign grade is: " << fm.getSignGrade() << ", execution grade is: " << fm.getExecGrade() << std::endl;
	if (fm.getIsSigned() == true)
		otsm << fm.getName() << " is signed." << std::endl;
	else if (fm.getIsSigned() == false)
		otsm << fm.getName() << " is not signed." << std::endl;
	return otsm;
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

int AForm::getSignGrade() const
{
	return signGrade;
}

int AForm::getExecGrade() const
{
	return execGrade;
}
