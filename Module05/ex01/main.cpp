/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:49:18 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/07 13:33:24 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    // Bureaucrat b(151, "abdelhamid");

	// try {
    //     Form f;
    //     f.beSigned(b);
    // } catch (Form::GradeTooLowException &e) {
    //     std::cout << e.what() << std::endl;
    // }
	// try {
    //     Bureaucrat b(149, "Abdelhamid");

    //     std::cout << b.getGrade() << std::endl;
    //     b.decrementBureacratGrade();
    //     std::cout << b.getGrade() << std::endl;
    //     b.decrementBureacratGrade();
    //     std::cout << b.getGrade() << std::endl;
    // } catch (Bureaucrat::GradeTooLowException &e) {
    //     std::cout << e.what() << std::endl;
    // }
	// Bureaucrat b;

	// std::cout << b;
	// Bureaucrat c(b);

    try {
        Bureaucrat b(2, "Abdelhamid");
        Form f("Form: Abdelhamid", 100, 50);

        f.beSigned(b);
        std::cout << f << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat b(2, "Abdelhamid");
        Form f("Form: Abdelhamid", 100, 50);

        b.signForm(f);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	// while (1);
}
