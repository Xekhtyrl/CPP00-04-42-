/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:59:48 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/06 22:15:28 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout<<&brain<<std::endl;
	std::cout<<stringPTR<<std::endl;
	std::cout<<&stringREF<<std::endl;

	std::cout<<brain<<std::endl;
	std::cout<<*stringPTR<<std::endl;
	std::cout<<stringREF<<std::endl;
}