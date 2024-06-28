/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:48:45 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/25 18:01:52 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

// Class declaration
class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(std::string name, int hp, int eng, int dmg);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &rhs);
		~FragTrap();
		void highFivesGuys(void);

	private:
};

#endif // FRAGTRAP_HPP_
