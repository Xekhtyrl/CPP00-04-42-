/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:29:11 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/14 21:51:27 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
// Class declaration
class Brain {
 public:
  Brain();
  Brain(const Brain &other);
  Brain &operator=(const Brain &rhs);
  void implementThought(std::string newIdea);
  std::string *getBrain();
  ~Brain();

 private:
  std::string _ideas[100];
};

#endif // BRAIN_HPP_
