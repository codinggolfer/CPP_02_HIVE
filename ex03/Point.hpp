/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:54:02 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/20 15:21:24 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"
# include "cmath"

class Point
{
private:
	const Fixed _attribute_x;
	const Fixed _attribute_y;
public:
	Point();
	Point(float x, float y);
	Point(const Point& copy);
	Point& operator=(const Point& copy);
	~Point();
};


bool bsp(Point const a, Point const b, Point const c, Point const point);