/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:27:13 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/26 23:43:17 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data	d;
	uintptr_t	p;

	p = 6;
	d.ptr = 6;

	std::cout << &d << " : Reference of Data" << std::endl;
	std::cout << Serializer::serialize(&d) << " : Data after serialization" << std::endl;

	std::cout << p << " : uniptr value"<< std::endl;
	std::cout << Serializer::deserialize(p) << " : uniptr after deserelize"<< std::endl;

	std::cout << Serializer::deserialize(Serializer::serialize(&d)) << " : serialize and deserialize"<< std::endl;
	return 0;
}
