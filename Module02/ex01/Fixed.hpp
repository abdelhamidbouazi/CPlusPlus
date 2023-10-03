/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:43:17 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/18 03:24:08 by abouazi          ###   ########.fr       */
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
		Fixed(const int num);
		Fixed(const float fl);
		Fixed( const Fixed &cp );
		Fixed& operator=( const Fixed &op );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		int	toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream &operator << (std::ostream &output, const Fixed &fix);

# endif
