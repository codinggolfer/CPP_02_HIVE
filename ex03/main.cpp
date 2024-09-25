/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:53:41 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/25 14:52:56 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
{
	Point a(1.0f, 1.0f);
	Point b(7.0f, 1.0f);
	Point c(4.0f, 6.0f);
	Point point(1.1f, 1.1f);

	if (bsp(a, b, c, point))
		std::cout << "test 1: point is in the triangle" << std::endl;
	else
		std::cout << "test 1: point is not in the triangle" << std::endl;
}
{
	Point a(1.0f, 1.0f);
	Point b(7.0f, 1.0f);
	Point c(4.0f, 6.0f);
	Point point(-3.0f, -3.0f);

	if (bsp(a, b, c, point))
		std::cout << "test 2: point is in the triangle" << std::endl;
	else
		std::cout << "test 2: point is not in the triangle" << std::endl;

}
	Point a(1.0f, 1.0f);
	Point b(2.0f, 2.0f);
	Point c(3.0f, 1.0f);
	Point point(2.0f, 1.5f);

	if (bsp(a, b, c, point))
		std::cout << "test 3: point is in the triangle" << std::endl;
	else
		std::cout << "test 3: point is not in the triangle" << std::endl;

	std::cout << std::boolalpha << bsp(a, b, c, point) << std::endl;
}