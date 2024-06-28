/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:30:25 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 17:27:19 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
// Class declaration
class Animal {
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &rhs);
		std::string getType() const;
		virtual ~Animal();
		virtual void makeSound() const;

	protected:
		std::string _type;
};

#endif // ANIMAL_HPP_
