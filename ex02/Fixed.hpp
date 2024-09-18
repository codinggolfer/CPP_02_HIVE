/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:58:57 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/18 13:46:12 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int fixedPointNum;
	static const int fracBits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	static Fixed& min(Fixed&, Fixed&);
	static const  Fixed& min(const Fixed&, const Fixed&);
	static Fixed& max(Fixed&, Fixed&);
	static const Fixed& max(const Fixed&, const Fixed&);
	float toFloat() const;
	int toInt() const;

//Comparison operators:
	Fixed& operator<(Fixed& other);
	Fixed& operator>(Fixed& other);
	Fixed& operator>=(Fixed& other);
	Fixed& operator<=(Fixed& other);
	Fixed& operator!=(Fixed& other);
	Fixed& operator==(Fixed& other);
//Arithmetic operators:
	Fixed& operator-();
	Fixed& operator+();
	Fixed& operator*();
	Fixed& operator/(int jako);
//Increment operator
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	
	friend std::ostream& operator<<(std::ostream& out, const Fixed& value);
	
	~Fixed(); 
};

