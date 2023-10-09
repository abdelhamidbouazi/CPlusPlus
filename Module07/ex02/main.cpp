/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:20:26 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/09 02:50:31 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<char> a(23);
	Array<char> b;
	Array<char> c(a);
	try {
		Array<char> d(4);

		d[0] = 'O';
		d[1] = 'P';
		d[2] = 'U';
		d[3] = 'S';


		std::cout << "testing array : " << d[0] << std::endl;
		std::cout << "testing array : " << d[1] << std::endl;
		std::cout << "testing array : " << d[2] << std::endl;
		std::cout << "testing array : " << d[3] << std::endl;
		d[4] = '-';
		std::cout << "testing array : " << d[4] << std::endl;
	}
	catch (const std::out_of_range& e){
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
