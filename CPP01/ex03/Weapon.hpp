/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:09:49 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/06 20:36:08 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>

class Weapon {
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string& getType();
		void setType(std::string type);

	private:
		std::string _type;
};

#endif // WEAPON_HPP_
