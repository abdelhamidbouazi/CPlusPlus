/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:08:30 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/15 22:44:59 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
        {
            Intern  someRandomIntern;
            AForm*   rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            delete rrf;
        }
        std::cout << b << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
