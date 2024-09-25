/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:43:07 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/25 16:23:59 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointNum(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
	: fixedPointNum(num << fracBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
	: fixedPointNum((roundf(num * (1 << fracBits)))) {
	std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& copy)
	: fixedPointNum(copy.fixedPointNum) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this == &copy)
		return *this;
	else
		this->fixedPointNum = copy.fixedPointNum;
	return *this;	
}

float Fixed::toFloat() const {
	return static_cast<float>(fixedPointNum) / (1 << fracBits);
}

int Fixed::toInt() const {
	return fixedPointNum >> fracBits;
}


Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.toFloat();
    return out;
}