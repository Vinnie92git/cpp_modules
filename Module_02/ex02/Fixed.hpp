/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vini <vini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:15:43 by vini              #+#    #+#             */
/*   Updated: 2024/05/21 17:35:14 by vini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
private:
	int					value;
	static const int	bits = 8;

public:
	Fixed();
	Fixed(const Fixed& obj);
	Fixed& operator=(const Fixed& obj);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(const Fixed& nb);
	bool	operator<(const Fixed& nb);
	bool	operator>=(const Fixed& nb);
	bool	operator<=(const Fixed& nb);
	bool	operator==(const Fixed& nb);
	bool	operator!=(const Fixed& nb);

	Fixed	operator+(const Fixed& nb);
	Fixed	operator-(const Fixed& nb);
	Fixed	operator*(const Fixed& nb);
	Fixed	operator/(const Fixed& nb);

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	static Fixed&		min(Fixed& first, Fixed& second);
	static const Fixed&	min(const Fixed& first, const Fixed& second);
	static Fixed&		max(Fixed& first, Fixed& second);
	static const Fixed&	max(const Fixed& first, const Fixed& second);
};

std::ostream& operator<<(std::ostream& out, const Fixed& nbr);

#endif
