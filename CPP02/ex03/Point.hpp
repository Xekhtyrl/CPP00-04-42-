/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:01:08 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/11 19:45:56 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP_
#define POINT_HPP_

#include "Fixed.hpp"

// Class declaration
class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &other);
		Point &operator=(const Point &rhs);
		const Fixed& getX();
		const Fixed& getY();
		~Point();

	private:
		const Fixed _x;
		const Fixed _y;
};

#endif // POINT_HPP_
