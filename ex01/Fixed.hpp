/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:43:21 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/13 15:52:54 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

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
	float toFloat() const;
	int toInt() const;
	Fixed& operator=(const Fixed& copy);
	int getRawBits() const;
	void setRawBits(int const raw);
	
	friend std::ostream& operator<<(std::ostream& out, const Fixed& value);

	~Fixed();
};
