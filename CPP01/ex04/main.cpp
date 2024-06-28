/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:20:27 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/07 19:52:49 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string> 

void	replaceFile(std::ifstream& fileIn, std::ofstream& fileOut, std::string old, std::string newStr);

int main(int argc, char **argv){
	if (argc != 4)
		return (1);
	std::string fileName = argv[1];
	std::ifstream file(argv[1], std::ios::in);
	if (!file.is_open())
		return (std::cout<<"Error: File not found"<<std::endl, 1);
	std::ofstream newFile(fileName.append(".replace"), std::ios::out);
	if (!newFile.is_open())
		return (std::cout<<"Error while creating/opening file"<<std::endl, 1);
	replaceFile(file, newFile, argv[2], argv[3]);
	return 0;
}