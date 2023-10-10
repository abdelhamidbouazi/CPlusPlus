/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:01:23 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/10 17:57:18 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

template <typename T>
int	easyfind(T& first, int second) {
    typename T::iterator it = std::find(first.begin(), first.end(), second);

    if (it == first.end())
		throw (std::out_of_range("Not Found : Iterator got out of range !"));
    return std::distance(first.begin(), it);
}
