/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:44:30 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/28 18:35:01 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>

class A;
class B;
class C;

class Base
{
	public:
		virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);

# endif
