/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:58:45 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 11:26:21 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;
//std::cout << b << std::endl;
//std::cout << a << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
//std::cout << Fixed::min( a, b ) << std::endl;
//Fixed c = (Fixed(50) / Fixed(2.5f));
//std::cout << c << std::endl;

return 0;
}