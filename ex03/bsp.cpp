/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:20:00 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/03 21:44:47 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

float getArea( Point const a, Point const b, Point const c)
{
    float x = a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat());
    float y = b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat());
    float z = c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat());
    return std::abs(x + y + z) / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = getArea(a, b, c);
    float A1 = getArea(point, b, c);
    float A2 = getArea(a, point, c);
    float A3 = getArea(a, b, point);
    return (A == A1 + A2 + A3 && A1 > 0 && A2 > 0 && A3 > 0);
}