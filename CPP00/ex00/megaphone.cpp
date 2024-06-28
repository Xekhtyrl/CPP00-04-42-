/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:32:54 by lvodak            #+#    #+#             */
/*   Updated: 2024/05/31 14:54:54 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			while (*argv[i])
				std::cout<<(char)toupper(*argv[i]++);
		}
		std::cout<<std::endl;
	}
}
