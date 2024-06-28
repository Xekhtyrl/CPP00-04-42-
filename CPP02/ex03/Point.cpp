/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:04:53 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/11 20:54:44 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// Default constructor
Point::Point() { return; }
Point::Point(const float x, const float y) {
	(Fixed&)_x = Fixed(x);
	(Fixed&)_y = Fixed(y);
	return; }

// Copy constructor
Point::Point(const Point &other) {
  *this = other;
  (Fixed&)_x = (other._x);
  (Fixed&)_y = (other._y);
  return;
}

// Copy assignment overload
Point &Point::operator=(const Point &rhs) {
  (void)rhs;
  if (this != &rhs)
  {
  	(Fixed&)_x = (rhs._x);
  	(Fixed&)_y = (rhs._y);
  }
  return *this;
}

// Default destructor
Point::~Point() { return; }

const Fixed& Point::getX(){
	return ((this->_x));
}
const Fixed& Point::getY(){
	return ((this->_y));
}