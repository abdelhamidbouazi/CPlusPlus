/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:00:58 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/01 18:10:12 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>


template <typename t>
void	swap(t	&t1, t	&t2){
	t	tmp;
	tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template <typename t>
t	min(t	t1, t	t2){
	return (t1 < t2 ? t1 : t2);
}

template <typename t>
t	max(t	t1, t	t2){
	return (t1 > t2 ? t1 : t2);
}

# endif
