/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 23:05:49 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/11 21:37:34 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(0,0);
	Point b(0,6);
	Point c(6,0);
	Point p(1.2,1);
	std::cout<<"Point ["<<p.getX().toFloat()<<":"<<p.getY().toFloat();
	if (bsp(a, b, c, p))
		std::cout<<"] is in triangle"<<std::endl;
	else 
		std::cout<<"] is out of triangle"<<std::endl;
	return 0;
}