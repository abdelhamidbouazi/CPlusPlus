/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:57:03 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/11 13:33:30 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat() : grade(1), name("Abdelhamid")
{
	std::cout << "Default Construnctor Called" << std::endl;
}

// paramaterized contructor
Bureaucrat::Bureaucrat(int gr, const std::string na) : grade(gr), name(na)
{
	std::cout << "Paramiterized Contructor Called" << std::endl;
	if (gr > 150)
		throw Bureaucrat::GradeTooLowException();
	if (gr < 1)
		throw Bureaucrat::GradeTooHighException();
}


Bureaucrat::Bureaucrat(const Bureaucrat &cp) : name(cp.name)
{
	*this = cp;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cp)
{
	if (this != &cp){
		this->grade = cp.grade;
	}
	std::cout << this->name <<": copy assignment operator called" << std::endl;
	return *this;
}

// Getters
std::string const Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

// Increment and Decrement
void Bureaucrat::incrementBureaucratGrade()
{
	if ((grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementBureacratGrade()
{
	if ((grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Desctructor Called" << std::endl;
}

std::ostream &operator<<(std::ostream &otsm, const Bureaucrat &brct)
{
	otsm << brct.getName() << ", bureaucrat grade " << brct.getGrade() << "." << std::endl;
	return otsm;
}


