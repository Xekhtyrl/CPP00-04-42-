/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:54:45 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 21:00:26 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
// Class declaration
class Fixed {
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &rhs);
		int operator==(const Fixed &rhs);
		int operator>=(const Fixed &rhs);
		int operator<=(const Fixed &rhs);
		int operator!=(const Fixed &rhs);
		int operator>(const Fixed &rhs);
		int operator<(const Fixed &rhs);
		float operator+(const Fixed &rhs);
		float operator-(const Fixed &rhs);
		float operator*(const Fixed &rhs);
		float operator/(const Fixed &rhs);
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed& min(Fixed &fx1, Fixed &fx2);
		static const Fixed& min(const Fixed &fx1, const Fixed &fx2);
		static Fixed& max(Fixed &fx1, Fixed &fx2);
		static const Fixed& max(const Fixed &fx1, const Fixed &fx2);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		
	private:
		int _fixed;
		static const int _fract;
};
std::ostream& operator<<(std::ostream& out, const Fixed& Class);

#endif // FIXED_HPP_
