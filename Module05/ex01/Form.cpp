/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:28:59 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/07 14:20:12 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Abdelhamid"), isSigned(false), signGrade(150), execGrade(1)
{
	std::cout << "Default Contructor Called" << std::endl;
}

Form::Form(const std::string nm, const int sg, const int eg) : name(nm), signGrade(sg), execGrade(eg)
{
	if (sg > 150 || eg > 150)
		throw Form::GradeTooLowException();
	if (sg < 1 || eg < 1)
		throw Form::GradeTooHighException();
	std::cout << "Params Contructor Called" << std::endl;
}

Form::Form(const Form &cp) : name(cp.name), signGrade(cp.signGrade), execGrade(cp.execGrade)
{
	std::cout << "Copy Contructor Called" << std::endl;
}

Form &Form::operator=(const Form &cp)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &cp)
		isSigned = cp.isSigned;
	return *this;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() >= this->signGrade)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}


std::ostream &operator<<(std::ostream &otsm, const Form &fm)
{
	otsm << fm.getName() << "'s sign grade is: " << fm.getSignGrade() << ", execution grade is: " << fm.getExecGrade() << std::endl;
	if (fm.getIsSigned() == true)
		otsm << fm.getName() << " is signed." << std::endl;
	else if (fm.getIsSigned() == false)
		otsm << fm.getName() << " is not signed." << std::endl;
	return otsm;
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return name;
}

bool Form::getIsSigned() const
{
	return isSigned;
}

int Form::getSignGrade() const
{
	return signGrade;
}

int Form::getExecGrade() const
{
	return execGrade;
}
