/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:59:06 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/18 13:51:47 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructorst end:
Fixed::Fixed() : fixedPointNum(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
	: fixedPointNum(num << fracBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
	: fixedPointNum(static_cast<int>(roundf(num * (1 << fracBits)))) {
	std::cout << "Float constructor called" << std::endl;
}
//Constructorst end;



//Copy constructors and copy assigment begin:
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
//Copy constructors and copy assigment end;



//Int and float converters begin:
float Fixed::toFloat() const {
	return static_cast<float>(fixedPointNum) / (1 << fracBits);
}

int Fixed::toInt() const {
	return fixedPointNum >> fracBits;
}
//Int and float converters begin;


//Deconstructor:
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//Insertion overload:
std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.toFloat();
    return out;
}

//Comparison operators begin:
Fixed& Fixed::operator<(Fixed& other){
	
}

Fixed& Fixed::operator>(Fixed& other){
	
}

Fixed& Fixed::operator<=(Fixed& other){
	
}

Fixed& Fixed::operator>=(Fixed& other){
	
}

Fixed& Fixed::operator!=(Fixed& other){
	
}

Fixed& Fixed::operator==(Fixed& other){
	
}
//Comparsion operators end;


//Arithmetic operators begin:
Fixed& Fixed::operator-(){
	
}

Fixed& Fixed::operator+(){
	
}

Fixed& Fixed::operator*(){
	
}

Fixed& Fixed::operator/(int jako){
	
}

//Increment operator begin:
Fixed& Fixed::operator++(){
	
}

Fixed& Fixed::operator--(){
	
}

Fixed Fixed::operator++(int){
	
}

Fixed Fixed::operator++(int){
	
}
//Increment operator end;