/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:40:10 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/06 22:12:44 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	// _type = "";
	return;
}

Weapon::Weapon(std::string type) {
	this->_type = type;
	return;
}

Weapon::~Weapon() { return; }

const std::string& Weapon::getType() {
	if (!_type.c_str())
		_type = "";
	const std::string &stringREF = (_type);
	return (stringREF);
}
void Weapon::setType(std::string type) {
		this->_type = type;
}