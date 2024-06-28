/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:43:29 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 17:44:10 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap ClapT;
	ClapTrap ClapT3("Carlos");
	ClapTrap ClapT2(ClapT3);
	ClapT = ClapTrap("Esteban");
	for (int i = 0; i < 10; i++){
		ClapT.attack("The Void");
		ClapT.takeDamage(2);
		ClapT.beRepaired(2);
	}
	for (int i = 0; i < 3; i++){
		ClapT3.attack("The Void");
		ClapT3.takeDamage(2);
		ClapT3.beRepaired(2);
		ClapT2.attack("The Void");
		ClapT2.takeDamage(2);
		ClapT2.beRepaired(2);
	}
}