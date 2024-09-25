/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:54:02 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/25 15:09:28 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"

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
	float getX() const;
	float getY() const;
	~Point();
};


bool bsp(Point const a, Point const b, Point const c, Point const point);