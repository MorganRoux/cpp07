/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:23:56 by mroux             #+#    #+#             */
/*   Updated: 2021/06/29 20:42:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T t;
	t = b;
	b = a;
	a = t;
}

template <typename T>
T		min(T const& a, T const& b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T		max(T const& a, T const& b)
{
	if (a > b)
		return a;
	else
		return b;
}
