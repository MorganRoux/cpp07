/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:30:32 by mroux             #+#    #+#             */
/*   Updated: 2021/06/30 22:03:30 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> a;
	Array<int> b(4);
	Array<int> c(2);
	Array<int> d(a);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	c = b;
	b[2] = 5;
	try {
		b[6] = 0;
	} catch(std::exception e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << a.size() << "-" << b.size() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
}
