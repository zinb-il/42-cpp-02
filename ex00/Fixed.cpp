/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:54:57 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/06 15:55:44 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed():_fixed_nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int n):_fixed_nb(n)
{
    std::cout << "initialization constructor" << std::endl;
}

Fixed::Fixed(Fixed const &ob)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ob;
}

Fixed & Fixed::operator=(Fixed const &ob)
{
     std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_nb = ob.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_nb);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_nb = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & ref)
{
    o << ref.getRawBits();
    return (o);
}