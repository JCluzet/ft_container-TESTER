/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:13:40 by jcluzet           #+#    #+#             */
/*   Updated: 2022/04/14 14:28:35 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft {}
using namespace ft;

#include <vector>
#include <iostream>
#include <stack>
#include <iterator>
#include "../.././containers/stack.hpp"
#include "../.././containers/vector.hpp"
#include "../.././containers/map.hpp"
#include <map>
 
template <typename T>
void print_vec(vector <T> &v)
{
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << "capacity:" << v.capacity();
    std::cout << " size:" << v.size() << std::endl;
    std::cout << std::endl;
}
