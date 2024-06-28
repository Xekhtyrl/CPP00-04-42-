/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:19:17 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/20 16:24:45 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
#define CURE_HPP_

#include "AMateria.hpp"
// Class declaration
class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &rhs);
		~Cure();
		AMateria *clone() const;
		void use(ICharacter &target);

	private:
};

#endif // CURE_HPP_
