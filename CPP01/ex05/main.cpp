/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 21:35:32 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/10 20:11:16 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	print_choice(){
	std::cout<<"\033[1;32mPick one of the following option level: "
		<<"\033[1;35m[DEBUG] [INFO] [WARNING] [ERROR]\033[0m\n"<<std::endl;
	std::cout<<"\033[1;34mInput : \033[0m";
}

int main(){
	Harl Harl2;
	std::string input;
	while (1)
	{
		print_choice();
		std::cin>>input;
		if (std::cin.eof())
			break ;
		Harl2.complain(input);
	}
	return 0;
}