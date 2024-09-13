/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:12:39 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/13 13:13:28 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
	: fixedPointNum(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
	: fixedPointNum(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed& copy)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this == &copy)
		return copy;
	else
		this->fixedPointNum = getRawBits();
	return *this;
	
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointNum;
}

void Fixed::setRawBits(int const raw){
	fixedPointNum = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

