/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:22:07 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/06 21:49:49 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& name);

	private:
		std::string	_name;
		Weapon* _weapon;
};

#endif