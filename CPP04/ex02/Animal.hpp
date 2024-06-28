/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:30:25 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/19 17:06:06 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
// Class declaration
class Animal {
	public:
		virtual ~Animal() = 0;
		virtual std::string getType() const;
		virtual void makeSound() const = 0;
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &rhs);
	protected:
		std::string _type;
};

#endif // ANIMAL_HPP_
