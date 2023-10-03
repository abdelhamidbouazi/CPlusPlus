/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:24 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/14 15:22:53 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string	t) : AForm("RobotomyRequestForm", 72, 45), target(t)
{
	// std::cout << "-----RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &cp) : AForm(cp), target(cp.target)
{
	(void)cp;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cp)
{
	(void)cp;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	static int count;

	if (getExecGrade() <  executor.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	count = rand() % 2;
	if (count == 1){
		std::cout << target << "  has been robotomized successfully" << std::endl;
	}
	else {
		std::cout << "robotomization of " << target << "failed" << std::endl;
	}
	count ++;
}
