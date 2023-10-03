/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 05:48:53 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/09 06:54:51 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main (int ac, char **av)
{
	if (ac != 4) {
		std::cerr << "ERROR: Arguments error, Usage -> <filename> <s1> <s2>" << std::endl;
	}
	else {
		std::string		filename = av[1];
		std::string		s1 = av[2];
		std::string		s2 = av[3];
		Sed(filename, s1, s2);
	}
	return 0;
}
