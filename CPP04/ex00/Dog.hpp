/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:57:18 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 17:24:26 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
// Class declaration
class Dog : public Animal{
 public:
  Dog();
  Dog(const Dog &other);
  Dog &operator=(const Dog &rhs);
  virtual ~Dog();
  void makeSound() const;
 private:
  
};

#endif // DOG_HPP_
