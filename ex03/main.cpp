/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:53:41 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/20 15:22:54 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point a(0.0f, 5.0f);
	Point b(5.0f, 10.0f);
	Point c(0.0f, 10.0f);
	Point point;

	if (bsp(a, b, c, point))
		std::cout << "point is in the triangle" << std::endl;
	else
		std::cout << "point is not in the triangle" << std::endl;
	return 0;
}