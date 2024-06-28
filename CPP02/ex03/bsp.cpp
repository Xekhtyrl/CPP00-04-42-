/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:03:00 by lvodak            #+#    #+#             */
/*   Updated: 2024/06/11 21:33:39 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	triangleAir(Point a, Point b, Point h){

	float val = (a.getX().toFloat() * (b.getY().toFloat() - h.getY().toFloat())
		+ b.getX().toFloat() * (h.getY().toFloat() - a.getY().toFloat())
		+ h.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2;
	if (val > 0)
		return val;
	else
		return (val * -1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
	float	ABC = triangleAir(a, b, c);
	float	ABP = triangleAir(a, b, point);
	float	ACP = triangleAir(a, c, point);
	float	BCP = triangleAir(b, c, point);
	if (ABP + ACP + BCP == ABC && ABP && ACP && BCP)
		return true;
	return false;
}
