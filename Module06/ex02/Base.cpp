/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:28:39 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/28 18:40:53 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate(void)
{
	srand(time(0));
	int randNum = 1 + rand() % 3;

	if (randNum == 1)
		return new A;
	else if (randNum == 2)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);

    int type = 0;

    if (a)
        type = 1;
    else if (b)
        type = 2;
    else if (c)
        type = 3;

    switch (type) {
        case 1:
            std::cout << "A" << std::endl;
            break;
        case 2:
            std::cout << "B" << std::endl;
            break;
        case 3:
            std::cout << "C" << std::endl;
            break;
        default:
            std::cout << "Unknown" << std::endl;
    }
}

void identify(Base& p)
{
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
		(void)a;
    } catch (std::bad_cast&) {
        try {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
			(void)b;
        } catch (std::bad_cast&) {
            try {
                C& c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
				(void)c;
            } catch (std::bad_cast&) {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}
