/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:56:54 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/10 19:06:22 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fract = 8;
// Default constructor
Fixed::Fixed() {
	this->_fixed = 0;
	// std::cout<<"Default Constructor Called"<<std::endl;
	return; }
Fixed::Fixed(const int n) {
	_fixed = n << _fract;
	// std::cout<<"Int Constructor Called"<<std::endl;
	return; }
Fixed::Fixed(const float n) {
	_fixed = roundf(n * (1 << _fract));
	// std::cout<<"Float Constructor Called "<<std::endl;
	return; }

// Copy assignment overload
Fixed& Fixed::operator=(const Fixed &rhs) {
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	// std::cout<<"Copy assignment operator Called"<<std::endl;
	return *this;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) {
	(*this) = (other);
	_fixed = other._fixed;
	// std::cout<<"Copy Constructor Called"<<std::endl;
	return;
}

// Default destructor
Fixed::~Fixed() {
	// std::cout<<"El Destructor Called"<<std::endl;
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

int Fixed::operator==(const Fixed &rhs){
	if (this->_fixed == rhs.getRawBits())
		return (1);
	return (0);
}
int Fixed::operator>=(const Fixed &rhs){
	if (this->_fixed >= rhs.getRawBits())
		return (1);
	return (0);
}
int Fixed::operator<=(const Fixed &rhs){
	if (this->_fixed <= rhs.getRawBits())
		return (1);
	return (0);
}
int Fixed::operator!=(const Fixed &rhs){
	if (this->_fixed != rhs.getRawBits())
		return (1);
	return (0);
}
int Fixed::operator>(const Fixed &rhs){
	if (this->_fixed > rhs.getRawBits())
		return (1);
	return (0);
}
int Fixed::operator<(const Fixed &rhs){
	if (this->_fixed < rhs.getRawBits())
		return (1);
	return (0);
}
float Fixed::operator+(const Fixed &rhs){
	return (this->toFloat() + rhs.toFloat());
}
float Fixed::operator-(const Fixed &rhs){
	return (this->toFloat() - rhs.toFloat());
}
float Fixed::operator*(const Fixed &rhs){
	return (this->toFloat() * rhs.toFloat());
}
float Fixed::operator/(const Fixed &rhs){
	return (this->toFloat() / rhs.toFloat());
}
Fixed& Fixed::operator++(){
	++_fixed;
	return *this;
}
Fixed& Fixed::operator--(){
	--_fixed;
	return *this;
}
Fixed Fixed::operator++(int){
	Fixed temp = *this;
	_fixed++;
	return temp;
}
Fixed Fixed::operator--(int){
	Fixed temp = *this;
	_fixed--;
	return temp;
}
Fixed& Fixed::min(Fixed &fx1, Fixed &fx2){
	if (fx1.toFloat() <= fx2.toFloat())
		return (fx1);
	else
		return (fx2);
}
const Fixed& Fixed::min(const Fixed &fx1, const Fixed &fx2){
	if (fx1.toFloat() <= fx2.toFloat())
		return (fx1);
	else
		return (fx2);
}
Fixed& Fixed::max(Fixed &fx1, Fixed &fx2){
	if (fx1.toFloat() >= fx2.toFloat())
		return (fx1);
	else
		return (fx2);
}
const Fixed& Fixed::max(const Fixed &fx1, const Fixed &fx2){
	if (fx1.toFloat() >= fx2.toFloat())
		return (fx1);
	else
		return (fx2);
}