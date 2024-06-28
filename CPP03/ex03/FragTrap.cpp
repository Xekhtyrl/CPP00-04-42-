/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:50:06 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 19:13:07 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() {
	this->_HP = 100;
	// if (this->_energy == 10)
	this->_energy = 100;
	this->_atkDmg = 30;
	std::cout<<"ClapTrap evolve to... a FragTrap"<<std::endl;
	// ClapTrap("Default FragTrap", 100, 50, 20);
	return; }
FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_name = name;
	this->_HP = 100;
	this->_energy = 100;
	this->_atkDmg = 30;
	std::cout<<"ClapTrap evolve to... a FragTrap"<<std::endl;
	// ClapTrap("Default FragTrap", 100, 50, 20);
	return; }
	
// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout<<"FragTrap copied"<<std::endl;
	*this = other;
	return;
}

// Copy assignment overload
FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	std::cout<<"FragTrap copied(ass. ovr.)"<<std::endl;
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_energy = rhs._energy;
	this->_atkDmg = rhs._atkDmg;
	return *this;
}

// Default destructor
FragTrap::~FragTrap() { 
	std::cout<<this->_name<<" regressed from a FragTrap to a basic ClapTrap (Desctruct)"<<std::endl;
	return; }

void FragTrap::highFivesGuys(void){
	if (!_HP)
		return ((void)(std::cout<<RED<<_name<<" has 0HP left!\n"<<_name<<" is dead and can't HighFive!!"<<NC<<std::endl));
	std::string in;
	std::cout<<_name<<" wants to give you a high Five, do you comply? [Y/other]\nInput: ";
	std::cin>>in;
	if (std::cin.eof()){
		std::cout<<_name<<" *very sadly*: ooooooooh... okay... I'll do it to myself then *clap his own hand*"<<std::endl;
		return;
	}
	if (!in.compare("Y"))
		std::cout<<_name<<" *very happily*: YEAAAAAAAAH HIGH FIVE"<<std::endl;
	else
		std::cout<<_name<<" *very sadly*: ooooooooh... okay... I'll do it to myself then *clap his own hand*"<<std::endl;
}
