/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:27:53 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/03 21:28:13 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/
Point::Point():x(Fixed(0)), y(Fixed(0))
{
    // std::cout << "Default constructor called" << std::endl;
}

Point::~Point()
{
//    std::cout << "Destructor called" << std::endl;
}

Point::Point(Point const & ob):x(ob.getX()), y(ob.getY())
{
    // std::cout << "Copy constructor called" << std::endl;
}

Point::Point(float const x1, float const y1):x(Fixed(x1)), y(Fixed(y1))
{
    // std::cout << "Float constructor called" << std::endl;
}
  
Point & Point::operator=(Point const & ob)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    const_cast<Fixed&>(this->x) = ob.x;
    const_cast<Fixed&>(this->y) = ob.y;
    return *this;
}

  
Fixed Point::getX(void) const
{
    return(this->x);
}
        
Fixed Point::getY(void) const
{
    return(this->y);
}

std::ostream & operator<<(std::ostream &o, Point & ref)
{
    o << "x " << ref.getX().toFloat() << " y " << ref.getY().toFloat();
    return o;
}
/********************************************************************/