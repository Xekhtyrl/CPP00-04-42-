/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:38:32 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/06 22:09:45 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Default constructor
HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB() { return; }

void HumanB::setWeapon(Weapon& name) {
	this->_weapon = &name;
}

void HumanB::attack() {
	if (!_weapon)
		std::cout<<this->_name<<" attack with their "<<"[no weapon]"<<std::endl;
	else
		std::cout<<this->_name<<" attack with their "<<_weapon->getType()<<std::endl;
}