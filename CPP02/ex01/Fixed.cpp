/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:56:54 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/10 15:55:10 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fract = 8;
// Default constructor
Fixed::Fixed() {
	this->_fixed = 0;
	std::cout<<"Default Constructor Called"<<std::endl;
	return; }
Fixed::Fixed(const int n) {
	_fixed = n << _fract;
	std::cout<<"Int Constructor Called"<<std::endl;
	return; }
Fixed::Fixed(const float n) {
	_fixed = roundf(n * (1 << _fract));
	std::cout<<"Float Constructor Called "<<std::endl;
	return; }

// Copy assignment overload
Fixed& Fixed::operator=(const Fixed &rhs) {
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	std::cout<<"Copy assignment operator Called"<<std::endl;
	return *this;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) {
	(*this) = (other);
	_fixed = other._fixed;
	std::cout<<"Copy Constructor Called"<<std::endl;
	return;
}

// Default destructor
Fixed::~Fixed() {
	std::cout<<"El Destructor Called"<<std::endl;
	return; }

int Fixed::getRawBits( void ) const{
	return (_fixed);
}

void Fixed::setRawBits( int const raw ){
	this->_fixed = raw;
}

float	Fixed::toFloat( void ) const{
	return ((float)_fixed / (1 << _fract));
}
int	Fixed::toInt( void ) const{
	return (_fixed >> _fract);
}

std::ostream& operator<<(std::ostream& out, const Fixed& Class){
	return out<<Class.toFloat();
}