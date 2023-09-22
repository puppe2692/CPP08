/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:00:48 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/22 17:24:22 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/easyfind.hpp"

int main(void)
{
 	int arr[] = {0, 5, 6, 4, 7, 3, 8, 2, 9, 1};
    std::vector<int> vect1(arr, arr + sizeof(arr) / sizeof(arr[0]));
	
	try
	{
		easyfind(vect1, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		easyfind(vect1, 12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}