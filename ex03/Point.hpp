/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:22:50 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/03 21:27:05 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef POINT_H
#   define POINT_H

#include "Fixed.h"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        ~Point();
        Point(float const x1, float const y1);
        Point(Point const & ob);
        Point & operator=(Point const & ob);

        Fixed  getX(void) const;
        Fixed  getY(void) const;
};

std::ostream & operator<<(std::ostream &o, Point & ref);

#   endif