/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:54:57 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/03 11:53:00 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Fixed::Fixed():_fixed_nb(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
   // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int n):_fixed_nb(std::roundf(n * (1 << _frac_bit)))
{
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float n):_fixed_nb(std::roundf(n * (1 << _frac_bit)))
{
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &ob)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = ob;
}
/********************************************************************/





/********************************************************************/
/*                    Comparison Operator Overload                  */
/********************************************************************/

Fixed & Fixed::operator=(Fixed const &ob)
{
     //std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_nb = ob.getRawBits();
    return *this;
}

bool    Fixed::operator<(Fixed const &ob)
{
    return (this->_fixed_nb < ob.getRawBits());
}

bool    Fixed::operator<=(Fixed const &ob)
{
    return (this->_fixed_nb <= ob.getRawBits());
}

bool    Fixed::operator>(Fixed const &ob)
{
    return (this->_fixed_nb > ob.getRawBits());
}

bool    Fixed::operator>=(Fixed const &ob)
{
    return (this->_fixed_nb >= ob.getRawBits());
}

bool    Fixed::operator==(Fixed const &ob)
{
    return (this->_fixed_nb == ob.getRawBits());
}

bool    Fixed::operator!=(Fixed const &ob)
{
    return (this->_fixed_nb != ob.getRawBits());
}
/********************************************************************/





/********************************************************************/
/*                     Arithmetic Operator Overload                 */
/********************************************************************/

Fixed Fixed::operator+(Fixed const &ob)
{
    return (this->toFloat() + ob.toFloat());
}

Fixed Fixed::operator-(Fixed const &ob)
{
    return (this->toFloat() - ob.toFloat());
}

Fixed Fixed::operator*(Fixed const &ob)
{
    return (this->toFloat() * ob.toFloat());
}

Fixed Fixed::operator/(Fixed const &ob)
{
    return (this->toFloat() / ob.toFloat());
}
/********************************************************************/






/********************************************************************/
/*                     Arithmetic Operator Overload                 */
/********************************************************************/

Fixed   & Fixed::operator++(void)
{
    ++this->_fixed_nb;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed temp;

    temp = *this;
    ++this->_fixed_nb;
    return temp;
}

Fixed   & Fixed::operator--(void)
{
    --this->_fixed_nb;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed temp;

    temp = *this;
    --this->_fixed_nb;
    return temp;
}
/********************************************************************/



Fixed Fixed::min(Fixed &ob1, Fixed &ob2)
{
    if (ob1.toFloat() < ob2.toFloat())
        return (ob1);
    return (ob2);
}

Fixed Fixed::min(Fixed const &ob1, Fixed const &ob2)
{
    if (ob1.toFloat() < ob2.toFloat())
        return (ob1);
    return (ob2);
}

Fixed Fixed::max(Fixed &ob1, Fixed &ob2)
{
    if (ob1.toFloat() > ob2.toFloat())
        return (ob1);
    return (ob2);
}

Fixed Fixed::max(Fixed const &ob1, Fixed const &ob2)
{
    if (ob1.toFloat() > ob2.toFloat())
        return (ob1);
    return (ob2);
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_nb);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_nb = raw;
}

float Fixed::toFloat( void ) const
{
    float   f;

    f = static_cast<float>(this->_fixed_nb) / (1 << Fixed::_frac_bit);
    return f;
}

int Fixed::toInt( void ) const
{
    return this->_fixed_nb >> Fixed::_frac_bit;
}

std::ostream & operator<<(std::ostream & o, Fixed const & ref)
{
    o << ref.toFloat();
    return (o);
}