/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 07:26:32 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/09 08:31:42 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}
void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}
void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}
void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::complain( std::string level ){
	functions	_functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = 0;
	std::string	levs[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (levs[i].compare(level) && i < 4)
		i++;
	if (i < 4)
		(this->*_functions[i])();
}
