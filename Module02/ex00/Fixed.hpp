/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:43:17 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/18 14:07:08 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixePointValue;
		static const int	fractionalBits = 8;

	public:
		Fixed();
		Fixed( const Fixed &cp );

		Fixed& 	operator=( const Fixed &op );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		~Fixed();
};

# endif
