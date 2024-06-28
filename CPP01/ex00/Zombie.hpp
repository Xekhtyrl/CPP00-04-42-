/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:16:52 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/05 15:48:37 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>

// Class declaration
class Zombie {
	public:
		Zombie(std::string name);
		// Zombie(const Zombie &other);
		// Zombie &operator=(const Zombie &rhs);
		~Zombie();
		void announce(void);

	private:
		std::string	_name;
};

#endif // ZOMBIE_HPP_
