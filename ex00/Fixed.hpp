/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:12:25 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/13 13:02:15 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
private:
	int fixedPointNum;
	static const int number = 8;
public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed& operator=(Fixed& copy);
	int getRawBits() const;
	void setRawBits(int const raw);
	
	~Fixed();
};

