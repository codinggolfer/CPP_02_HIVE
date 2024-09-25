/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:54:45 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/25 15:10:20 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float triangle_space(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return std::abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1 - y2))/2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A = triangle_space(a.getX(), a.getY(),
							 b.getX(), b.getY(),
							 c.getX(), c.getY());
							 
	float A1 = triangle_space(point.getX(), point.getY(),
							  b.getX(), b.getY(),
							  c.getX(), c.getY());
							 
	float A2 = triangle_space(point.getX(), point.getY(),
							  a.getX(), a.getY(),
							  c.getX(), c.getY());
							 
	float A3 = triangle_space(point.getX(), point.getY(),
							  a.getX(), a.getY(),
							  b.getX(), b.getY());
	

	if (!A1 || !A2 || !A3)
		return false;	
	return (A == A1 + A2 + A3);
}