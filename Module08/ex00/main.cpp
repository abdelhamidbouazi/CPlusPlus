/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:01:27 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/10 18:03:04 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	std::vector<int> myContainer;

	myContainer.push_back(10);
	myContainer.push_back(20);
	myContainer.push_back(30);
	myContainer.push_back(40);
	myContainer.push_back(50);

	try {
		std::cout << easyfind(myContainer, 20) << std::endl;
		std::cout << easyfind(myContainer, 1) << std::endl;
		std::cout << easyfind(myContainer, 5) << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
