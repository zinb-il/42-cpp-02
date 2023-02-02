/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:54:44 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/02 21:48:37 by ziloughm         ###   ########.fr       */
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

        Fixed   & operator=(Fixed const &ob);
        Fixed   operator+(Fixed const &ob);
        Fixed   operator-(Fixed const &ob);
        Fixed   operator/(Fixed const &ob);
        Fixed   operator*(Fixed const &ob);
        bool    operator<(Fixed const &ob);
        bool    operator<=(Fixed const &ob);
        bool    operator>(Fixed const &ob);
        bool    operator>=(Fixed const &ob);
        bool    operator==(Fixed const &ob);
        bool    operator!=(Fixed const &ob);
        Fixed   & operator++(void);//Prefix
        Fixed   operator++(int);//Postfix
        Fixed   & operator--(void);
        Fixed   operator--(int);
        
        
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed min(Fixed &ob1, Fixed &ob2);
        static Fixed min(Fixed const &ob1, Fixed const &ob2);
        static Fixed max(Fixed &ob1, Fixed &ob2);
        static Fixed max(Fixed const &ob1, Fixed const &ob2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & ref);

#	endif