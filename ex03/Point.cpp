/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:54:31 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/25 15:09:43 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _attribute_x(0), _attribute_y(0) {}

Point::Point(float x, float y) : _attribute_x(x), _attribute_y(y) {}

Point::Point(const Point& copy)
	: _attribute_x(copy._attribute_x), _attribute_y(copy._attribute_y) {}

Point& Point::operator=(const Point& copy)
{
	if (this == &copy)
		return *this;
	return *this;	
}

float Point::getX() const {
	return this->_attribute_x.toFloat();
}

float Point::getY() const {
	return this->_attribute_y.toFloat();
}

Point::~Point() {}
