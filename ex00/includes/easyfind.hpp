/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:25:16 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/22 17:18:46 by nwyseur          ###   ########.fr       */
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


template<typename T>
void	easyfind(T conteners, int entier);

template<>
void	easyfind<std::vector<int> >(std::vector<int> conteners, int entier)
{
	std::vector<int>::iterator it = std::find(conteners.begin(), conteners.end(), entier);
	if (it != conteners.end())
		std::cout << "Element found at position " << std::distance(conteners.begin(), it) << std::endl;
	else
		throw std::exception();
}

#endif