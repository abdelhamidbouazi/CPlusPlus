/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:57:01 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/05 16:14:52 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		unsigned int		grade;
		std::string	const	name;
	public:
		Bureaucrat();
		Bureaucrat(int gr, const std::string na);
		Bureaucrat(const Bureaucrat &cp);
		Bureaucrat& operator=(const Bureaucrat &cp);
		~Bureaucrat();

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

		// Getters
		std::string const getName() const;
		int getGrade() const;

		void	incrementBureaucratGrade();
		void	decrementBureacratGrade();
};

std::ostream& operator<<(std::ostream& otsm, const Bureaucrat& brct);

# endif
