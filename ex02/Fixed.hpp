/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:58:57 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/25 16:46:42 by eagbomei         ###   ########.fr       */
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
//Min and Max:
	static Fixed& min(Fixed& a, Fixed& b);
	static const  Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
//Change to fixed point:
	float toFloat() const;
	int toInt() const;

//Comparison operators:
	bool operator<(Fixed& other);
	bool operator>(Fixed& other);
	bool operator>=(Fixed& other);
	bool operator<=(Fixed& other);
	bool operator!=(Fixed& other);
	bool operator==(Fixed& other);
//Arithmetic operators:
	Fixed& operator-();
	Fixed& operator+();
	Fixed& operator*(const Fixed& other);
	Fixed& operator/(int jako);
//Increment operator
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int); //post-increment
	Fixed operator--(int); //post-decrement
	
	
	~Fixed(); 
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);
