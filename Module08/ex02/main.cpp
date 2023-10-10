/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:37:43 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/10 23:51:32 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "\n======== numbers =========\n";
	MutantStack<int>	nums;

	nums.push(1);
	nums.push(2);
	int i = nums.top();
	std::cout << "last: " << i;

	std::cout << "\n========= chars - itertor ========\n";

	MutantStack<char> chars;
	chars.push('O');
	chars.push('P');
	chars.push('U');
	chars.push('S');
	MutantStack<char>::iterator iter_begin = chars.begin();
	MutantStack<char>::iterator iter_end = chars.end();

	while (iter_begin <= iter_end){
		std::cout << *iter_begin;
		*iter_begin++;
	}

	std::cout << "\n========= numbers - reverse_iterator ========\n";
	// chars.push(2);
	// chars.push(0);
	// chars.push(0);
	// chars.push(1);


	MutantStack<int>::reverse_iterator riter_begin = nums.rbegin();
	MutantStack<int>::reverse_iterator riter_end = nums.rend();


	// std::cout << "\n====values=====\n";
	while (riter_begin < riter_end){
		std::cout << *riter_begin;
		*riter_begin++;
	}
	std::cout << "\n=========\n";
	// (void)riter_begin;
	// (void)riter_end;
	// *riter_begin--;
	// std::cout << "value in reverse_terator begin is: " << *riter_begin << "\n";
	// std::cout << "value in reverse_terator end is: " << *riter_end << "/n";
	return 0;
}
