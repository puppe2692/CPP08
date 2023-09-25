/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:37:52 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/25 17:29:33 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <vector>
# include <algorithm>
# include <iterator>

class Span
{
	public: 
		Span(unsigned int N) : _N(N), _c(0){}
		Span(Span const& other) {*this = other;}
		Span& operator=(Span const& other) {this->_N = other._N;
		this->_c = other._c; this->_vectInt = other._vectInt; return (*this);}
		~Span() {}

		void addNumber(int num);
		void addSeveralNumber(int begin, int end);
		int shortestSpan(void);
		int longestSpan(void);
		template<typename T>
		void	fillRange(typename T::iterator begin, typename T::iterator end);
		void	printData(std::ostream &o) const;

	private:
		Span();
		unsigned int _N;
		unsigned int _c;
		std::vector<int> _vectInt;
};

std::ostream	&operator<<(std::ostream &o, const Span &span);

template<typename T> 
void Span::fillRange(typename T::iterator begin, typename T::iterator end)
{
	typename T::iterator	it;

	it = begin;
	while (it != end)
	{
		addNumber(*it);
		it++;
	}
}

#endif
