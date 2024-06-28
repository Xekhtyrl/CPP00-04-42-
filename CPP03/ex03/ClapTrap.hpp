/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:51:47 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/13 19:39:33 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>
// Class declaration
class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &rhs);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();

	protected:
		std::string		_name;
		unsigned int	_HP;
		int				_energy;
		int				_atkDmg;
};

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define NC "\033[0m"
#endif // CLAPTRAP_HPP_
