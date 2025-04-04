/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:39:48 by athonda           #+#    #+#             */
/*   Updated: 2025/04/03 14:22:40 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

std::string	my_toupper(std::string s)
{
	std::transform(s.begin(), s.end(), s.begin(), (int(*)(int))std::toupper);
	return (s);
}

int	main(int ac, char **av)
{
	std::vector<std::string> args(av + 1, av + ac);
	std::transform(args.begin(), args.end(), args.begin(), &my_toupper);
	std::cout << args[1] << std::endl;
	return (0);
}