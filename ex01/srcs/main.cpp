/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:58:09 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/25 17:31:38 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/span.hpp"

int main(void)
{
	std::cout << "--------------SUBJECT TEST----------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "--------------ITERATOR TEST----------------" << std::endl;
	int arr[] = {0, 5, 6, 4, 7, 3, 8, 2, 9, 1};
	std::vector<int> vecttest(arr, arr + sizeof(arr) / sizeof(arr[0]));
	Span sp2(10);
	sp2.fillRange< std::vector<int> >(vecttest.begin(), vecttest.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << sp2 << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "--------------10 000 TEST----------------" << std::endl;
	Span sp3 = Span(10000);
	for (int i = 0; i < 10000; i++)
		sp3.addNumber(i);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}