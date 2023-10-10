/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:10:14 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/10 18:59:38 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
	try {
		Span	s(5);

		s.addNumber(10);
		s.addNumber(19);
		s.addNumber(21);
		s.addNumber(31);
		s.addNumber(41);
		std::cout << s.shortestSpan() << std::endl;
		s.addNumber(60);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
