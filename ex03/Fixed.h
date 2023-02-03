/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:53:50 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/03 21:20:39 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cmath>

# include "Fixed.hpp"
# include "Point.hpp"

float getArea( Point a, Point b, Point c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#	endif