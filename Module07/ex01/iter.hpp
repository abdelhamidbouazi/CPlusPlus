/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:15:07 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/02 17:19:32 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>


template <typename t>
void	iter(t arr[], int	arrLen, t (*function)(t)){
	int i;

	i = 0;
	while(i < arrLen){
		(*function)(arr[i++]);
	}
	std::cout << "\n";
}

template <typename T>
T	func(T	arr)
{
	std::cout << arr;
	return arr;
}

# endif
