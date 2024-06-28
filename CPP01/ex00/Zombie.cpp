/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:21:33 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/05 17:46:38 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
	_name = name;
	return;
}

Zombie::~Zombie() {
	std::cout<<_name<<": *killed by headshot*"<<std::endl;
	return ;
}

void	Zombie::announce(void){
	std::cout<<_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
