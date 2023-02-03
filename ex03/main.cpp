/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:12:27 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/03 21:45:17 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void)
{
    Point a(0, 1);
    Point b(2, 0);
    Point c(0, -1);
    Point d(1, 0);
    // Point a(0.0, 0.0);
    // Point b(0.0, 4.0);
    // Point c(5.0, 0.0);
    // Point d(1.0, 1.0);
    // Point e(10.0, 10.0);
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << c << std::endl;
    std::cout << "le point " ;
    std::cout << (bsp(a, b, c, d)? "est" : "n'est pas");
    std::cout << " à l’intérieur du triangle." << std::endl;
    return 0;
}