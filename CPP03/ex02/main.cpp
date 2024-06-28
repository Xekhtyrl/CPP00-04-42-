/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:43:29 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 18:31:17 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
	FragTrap ClapT;
	FragTrap ClapT3("Carlos");
	FragTrap ClapT2(ClapT3);
	ClapT = FragTrap("Not Scatman");
	ClapT.highFivesGuys();
	for (int i = 0; i < 10; i++){
		ClapT.attack("The Void");
		ClapT.takeDamage(2);
		ClapT.beRepaired(-2147483647);
	}
	for (int i = 0; i < 3; i++){
		ClapT3.attack("The Void");
		ClapT3.takeDamage(2);
		ClapT3.beRepaired(2);
		ClapT2.attack("The Void");
		ClapT2.takeDamage(2);
		ClapT2.beRepaired(2);
	}
	ClapT2.highFivesGuys();
	ClapT3.highFivesGuys();
}