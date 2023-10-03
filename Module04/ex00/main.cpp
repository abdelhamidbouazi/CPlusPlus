/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:51:45 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 14:18:32 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
 	std::cout<< "________________________________" << std::endl;
	std::cout<< "__________Animal Tests__________" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();
    delete  meta;
    delete  j;
    delete  i;

    std::cout<< "_____________________________________" << std::endl;
	std::cout<< "__________WrongAnimal Tests__________" << std::endl;
    const WrongAnimal *wA = new WrongAnimal();
    const WrongAnimal *wC = new WrongCat();
    std::cout << wA->getType() << " " << std::endl;
    std::cout << wC->getType() << " " << std::endl;
    wA->makeSound();
    wC->makeSound();
    delete  wA;
    delete  wC;

	return 0;
}
