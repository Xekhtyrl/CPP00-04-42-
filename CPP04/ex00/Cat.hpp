/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:37:16 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 17:24:32 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
// Class declaration
class Cat : public Animal{
 public:
  Cat();
  Cat(const Cat &other);
  Cat &operator=(const Cat &rhs);
  virtual ~Cat();
  void makeSound() const;
 private:
  
};

#endif // CAT_HPP_
