/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:50:06 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 18:04:00 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30){
	std::cout<<"ClapTrap evolve to... a FragTrap"<<std::endl;
	return; }
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
	std::cout<<"ClapTrap evolve to... a FragTrap"<<std::endl;
	return; }
FragTrap::FragTrap(std::string name, int hp, int eng, int dmg) : ClapTrap(name, hp, eng, dmg) { 
	std::cout<<"ClapTrap evolve to... a FragTrap"<<std::endl;
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
	std::cout<<this->getName()<<" regressed from a FragTrap to a basic ClapTrap (Desctruct)"<<std::endl;
	return; }
void FragTrap::highFivesGuys(void){
	if (!getHP())
		return ((void)(std::cout<<RED<<getName()<<" has 0HP left!\n"<<getName()<<" is dead and can't HighFive!!"<<NC<<std::endl));
	std::string in;
	std::cout<<getName()<<" wants to give you a high Five, do you comply? [Y/other]\nInput: ";
	std::cin>>in;
	if (std::cin.eof()){
		std::cout<<getName()<<" *very sadly*: ooooooooh... okay... I'll do it to myself then *clap his own hand*"<<std::endl;
		return;
	}
	if (!in.compare("Y"))
		std::cout<<getName()<<" *very happily*: YEAAAAAAAAH HIGH FIVE"<<std::endl;
	else
		std::cout<<getName()<<" *very sadly*: ooooooooh... okay... I'll do it to myself then *clap his own hand*"<<std::endl;
}