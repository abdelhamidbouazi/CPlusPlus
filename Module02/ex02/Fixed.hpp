/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:43:17 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/18 14:30:32 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		int	toInt( void ) const;
		float	toFloat( void ) const;

		bool	operator>(const Fixed &op) const;
		bool	operator<(const Fixed &op) const;
		bool	operator>=(const Fixed &op) const;
		bool	operator<=(const Fixed &op) const;
		bool	operator==(const Fixed &op) const;
		bool	operator!=(const Fixed &op) const;

		Fixed	operator+( const Fixed &op);
		Fixed	operator-( const Fixed &op);
		Fixed	operator*( const Fixed &op);
		Fixed	operator/( const Fixed &op);


		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static	Fixed &min(Fixed &ob1, Fixed &ob2);
		static	const Fixed &min(const Fixed &ob1, const Fixed &ob2);
		static	Fixed &max(Fixed &ob1, Fixed &ob2);
		static	const Fixed &max(const Fixed &ob1, const Fixed &ob2);

		~Fixed();
};

std::ostream &operator << (std::ostream &output, const Fixed &fix);

# endif
