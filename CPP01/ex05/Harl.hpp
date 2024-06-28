/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:40:03 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/07 20:42:53 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP_
#define HARL_HPP_

#include <iostream>
// Class declaration
class Harl {
	public:
		Harl();
		Harl(const Harl &other);
		Harl &operator=(const Harl &rhs);
		~Harl();
		void complain( std::string level );

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif // HARL_HPP_
