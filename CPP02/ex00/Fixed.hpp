/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:54:45 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/10 15:20:59 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

// Class declaration
class Fixed {
	public:
		Fixed();
		Fixed(int n);
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int _fixed;
		static const int _fract;
};

#endif // FIXED_HPP_
