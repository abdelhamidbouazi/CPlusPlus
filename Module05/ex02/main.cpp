/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:08:30 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/14 16:25:34 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    try {
        std::cout << "----ShrubberyCreationForm----" << std::endl;
        Bureaucrat b(2, "Abdelhamid");
        ShrubberyCreationForm t("test");

        t.beSigned(b);
        b.executeForm(t);

        std::cout << "----ShrubberyCreationForm----" << std::endl;
        RobotomyRequestForm r("Abdelhamid");

        b.executeForm(r);

        std::cout << "----PresidentialPardonForm----" << std::endl;
        PresidentialPardonForm p("Abdelhamid");

        b.executeForm(p);

        std::cout << b << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
