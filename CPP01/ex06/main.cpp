/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 21:35:32 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/07 21:51:44 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	if (argc > 2)
		return (std::cout<<"too many argument"<<std::endl, 1);
	Harl Harl2;
	
	if (argc == 2)
		Harl2.complain(argv[1]);
	else
		Harl2.complain("DEBUG");
}