/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:30:32 by mroux             #+#    #+#             */
/*   Updated: 2021/07/06 23:26:47 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	{
	Array<int> a;
	Array<int> b(4);
	Array<int> c(2);
	Array<int> d(c);
	c[0] = 10;
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" <<c << std::endl;
	c = b;
	b[2] = 5;
	try {
		b[6] = 0;
	} catch(std::exception e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << a.size() << "-" << b.size() << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" <<c << std::endl;
	std::cout << "d:" <<d << std::endl;
	}

	{
	Array<std::string> a;
	Array<std::string> b(4);
	Array<std::string> c(2);
	Array<std::string> d(a);

	c[0] = "Eric";
	std::cout << "a:" <<a << std::endl;
	std::cout << "b:" <<b << std::endl;
	std::cout << "c:" <<c << std::endl;
	c = b;
	b[2] = "Michel";
	try {
		b[6] = "Erreur";
	} catch(std::exception e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << a.size() << "-" << b.size() << std::endl;
	std::cout << "b:" <<b << std::endl;
	std::cout << "c:" <<c << std::endl;
	std::cout << "d:" <<d << std::endl;
	}
}
