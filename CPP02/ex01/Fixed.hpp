/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:54:45 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/19 17:13:31 by lvodak           ###   ########.fr       */
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
