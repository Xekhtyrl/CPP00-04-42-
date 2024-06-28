/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:34:29 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/06 21:49:57 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Default constructor
HumanA::HumanA(std::string name, Weapon& weapon) {
	this->_name = name;
	this->_weapon = &weapon;
	return;
}

HumanA::~HumanA() { return; }

void HumanA::attack() {
	std::cout<<this->_name<<" attack with their "<<this->_weapon->getType()<<std::endl;
}