/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:29:17 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/19 14:54:07 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Default constructor
Brain::Brain() {std::cout<<"Brain has been implemented"<<std::endl; return; }

// Copy constructor
Brain::Brain(const Brain &other) {
  *this = other;
  return;
}

// Copy assignment overload
Brain &Brain::operator=(const Brain &rhs) {
	if (this != &rhs){
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

// Default destructor
Brain::~Brain() { 
	std::cout<<"Brain destructor called"<<std::endl;
	return; }

void Brain::implementThought(std::string newIdea){
	int i = 0;
	for (int j = 0; j < 100; j++){
		i = j;
		if (_ideas[j].empty())
			break;
	}
	_ideas[i] = newIdea;
}

std::string *Brain::getBrain() {
	return (_ideas);
}