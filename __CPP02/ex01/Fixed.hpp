/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:28:53 by ychibani          #+#    #+#             */
/*   Updated: 2022/12/27 13:28:55 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# define    __SUCCESS 1
# define    __FAILURE 0

# include <iostream>
# include <cmath>

class   Fixed
{
    public :
        Fixed(void);
        Fixed(const	Fixed &t);
        Fixed(int const);
        Fixed(float const);
        ~Fixed(void);
        Fixed				&operator=(const Fixed &newFixed);
        int			getRawBits( void ) const;
        void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;
    
    private :
        static const int	__fract_part = 8;
        int					__fixed_value;
};

std::ostream		&operator<<(std::ostream &os, const Fixed &newFixed);

#endif