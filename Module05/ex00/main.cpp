/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:49:18 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/05 16:22:22 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	try {
        Bureaucrat b(1000, "Abdelhamid");

        std::cout << b.getGrade() << std::endl;

        b.incrementBureaucratGrade();
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
	try {
        Bureaucrat b(149, "Abdelhamid");

        std::cout << b.getGrade() << std::endl;
        b.decrementBureacratGrade();
        std::cout << b.getGrade() << std::endl;
        b.decrementBureacratGrade();
        std::cout << b.getGrade() << std::endl;
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
	Bureaucrat b;

	std::cout << b;
	Bureaucrat c(b);

	// while (1);
}
