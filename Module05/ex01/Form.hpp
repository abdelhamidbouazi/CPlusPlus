/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:28:56 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/23 19:37:46 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;
	public:
		Form();
		~Form();

		Form(const std::string nm, const int sg, const int eg);
		Form(const Form& cp);
		Form& operator=(const Form &cp);

		void	beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception
		{
				public : virtual const char* what() const throw(){
					return "Grade Too High";
				}
		};
		class GradeTooLowException : public std::exception
		{
				public : virtual const char* what() const throw(){
					return "Grade Too Low";
				}
		};

		// getters
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

};

std::ostream& operator<<(std::ostream& otsm, const Form& fm);

# endif
