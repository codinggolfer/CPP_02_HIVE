/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:59:06 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/25 16:51:28 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructorst end:
Fixed::Fixed() : fixedPointNum(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
	: fixedPointNum(num >> fracBits) {
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
	: fixedPointNum((roundf(num * (1 << fracBits)))) {
	//std::cout << "Float constructor called" << std::endl;
}
///#############################################################



//Copy constructors and copy assigment begin:
Fixed::Fixed(const Fixed& copy)
	: fixedPointNum(copy.fixedPointNum) {
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	//std::cout << "Copy assigment operator called" << std::endl;
	if (this == &copy)
		return *this;
	else
		this->fixedPointNum = copy.fixedPointNum;
	return *this;	
}
//#############################################################



//Int and float converters begin:
float Fixed::toFloat() const {
	return static_cast<float>(fixedPointNum) / (1 << fracBits);
}

int Fixed::toInt() const {
	return fixedPointNum >> fracBits;
}
//#############################################################


//Deconstructor:
Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

//Insertion overload:
std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.toFloat();
    return out;
}
//#############################################################

//Comparison operators begin:
bool Fixed::operator<(Fixed& other){
	return this->fixedPointNum < other.fixedPointNum;
}

bool Fixed::operator>(Fixed& other){
		return this->fixedPointNum > other.fixedPointNum;

}

bool Fixed::operator<=(Fixed& other){
		return this->fixedPointNum <= other.fixedPointNum;

}

bool Fixed::operator>=(Fixed& other){
		return this->fixedPointNum >= other.fixedPointNum;

}

bool Fixed::operator!=(Fixed& other){
		return this->fixedPointNum != other.fixedPointNum;

}

bool Fixed::operator==(Fixed& other){
		return this->fixedPointNum == other.fixedPointNum;

}
//#############################################################


//Arithmetic operators begin:
Fixed& Fixed::operator-(){
	this->fixedPointNum *= -1;
	return (*this);
}

Fixed& Fixed::operator+(){
	this->fixedPointNum *= +1;
	return (*this);
}

Fixed& Fixed::operator*(const Fixed& other){
	this->fixedPointNum *= other.fixedPointNum;
	return *this;	
}

Fixed& Fixed::operator/(int jako){
	this->fixedPointNum /= jako;
	return *this;
}
//#############################################################

//Increment operator begin:
Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	++this->fixedPointNum;
	return tmp;
}

Fixed& Fixed::operator++(){
	++this->fixedPointNum;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	--this->fixedPointNum;
	return tmp;
}

Fixed& Fixed::operator--(){
	--this->fixedPointNum;
	return *this;
}


//#############################################################

//Max and Min comparison begin:
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return a.fixedPointNum < b.fixedPointNum ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return a.fixedPointNum < b.fixedPointNum ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return a.fixedPointNum > b.fixedPointNum ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return a.fixedPointNum > b.fixedPointNum ? a : b;
}
//#############################################################

