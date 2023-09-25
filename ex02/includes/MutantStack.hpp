/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:17:04 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/25 18:55:52 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>


# define RED "\e[0;31m"
# define RESET "\e[0m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"


template<typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack<T>() {
            std::cout << GREEN << "Constructor called " << RESET << std::endl;
        }
        MutantStack<T>(typename std::stack<T> type) : _test(type) {
            std::cout << GREEN << "Constructor called with container" << RESET << std::endl;
        }
        ~MutantStack<T>() {
            std::cout << RED << "Destructor called " << RESET << std::endl;
        }
        MutantStack<T>(const MutantStack& other);
        MutantStack<T>& operator=(const MutantStack& other);

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return (this->c.begin());}
        iterator end() {return (this->c.end());}

    private:
        std::stack<T> _test;

};

#endif 