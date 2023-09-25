/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:12:17 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/25 17:46:08 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/span.hpp"

void Span::addNumber(int num)
{
	if (this->_c >= this->_N)
		throw std::exception();
	else
	{
		this->_vectInt.push_back(num);
		this->_c++;
	}
}

int Span::shortestSpan(void)
{
	int	shortspan;
	unsigned int i = 0;
	unsigned int j = 1;
	if (this->_c <= 1)
		throw std::exception();
	else
	{
		shortspan = std::abs(this->_vectInt[i] - this->_vectInt[j]);
		while (i < this->_c)
		{
			j = i + 1;
			while (j < this->_c)
			{
				if (std::abs(this->_vectInt[i] - this->_vectInt[j]) < shortspan)
					shortspan = std::abs(this->_vectInt[i] - this->_vectInt[j]);
				j++;
			}
			i++;
		}
	}
	return (shortspan);
}

int Span::longestSpan(void)
{
	int	longspan;
	unsigned int i = 0;
	unsigned int j = 1;
	if (this->_c <= 1)
		throw std::exception();
	else
	{
		longspan = std::abs(this->_vectInt[i] - this->_vectInt[j]);
		while (i < this->_c)
		{
			j = i + 1;
			while (j < this->_c)
			{
				if (std::abs(this->_vectInt[i] - this->_vectInt[j]) > longspan)
					longspan = std::abs(this->_vectInt[i] - this->_vectInt[j]);
				j++;
			}
			i++;
		}
	}
	return (longspan);
}

std::ostream	&operator<<(std::ostream &o, const Span &span)
{
	span.printData(o);
	return (o);
};

void	Span::printData(std::ostream &o) const
{
	o << "[ ";
	for (unsigned int i = 0; i < _c; i++)
		o << _vectInt[i] << " ";
	o << "] (" << _c << "/" << _N << ")";
}