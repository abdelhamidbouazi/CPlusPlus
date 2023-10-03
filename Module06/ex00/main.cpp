/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:41:49 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/24 17:36:53 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>


int main(int ac, char **av){

	try {
		if (ac != 2)
				throw "Arguments error";

		// ScalarConverter	s(av[1]);

		// s.convert(av[1]);
		ScalarConverter::convert(av[1]);
			// throw "Unknown Type";
			// throw av[1];
	}
	catch (const char e[])
	{
		std::cerr << e << std::endl;
	}
	return 0;
}
