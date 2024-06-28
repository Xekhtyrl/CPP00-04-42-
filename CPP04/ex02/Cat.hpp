/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:37:16 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/17 16:41:05 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP_
#define CAT_HPP_

#include "Brain.hpp"
#include "Animal.hpp"
// Class declaration
class Cat : public Animal{
 public:
  Cat();
  Cat(const Cat &other);
  Cat &operator=(const Cat &rhs);
  virtual ~Cat();
  void makeSound() const;
  void printThoughts();
 private:
  Brain* _brain;
};

#endif // CAT_HPP_
