/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:54:44 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/06 15:51:06 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FIXED_HPP
# define FIXED_HPP

#include "Fixed.h"

class Fixed
{
    private:
        int _fixed_nb;
        static int const _frac_bit = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(int n);
        Fixed(float n);
        Fixed(Fixed const &ob);
        Fixed & operator=(Fixed const &ob);
        
        
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & ref);

#	endif