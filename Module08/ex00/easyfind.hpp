/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:01:23 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/10 17:00:33 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void	easyfind(T first, int second) {
	int i;

	// std::vector<int>::iterator it = first
	i = 0;
	find(it.begin(), (it.end() - 1), second);
	// while (1) {
	// 	i++;
	// }
	std::cout << "the first occurence is: " << i <<" which is " <<  first.at(i) << std::endl;;
}
