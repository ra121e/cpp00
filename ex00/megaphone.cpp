/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:39:48 by athonda           #+#    #+#             */
/*   Updated: 2025/04/05 09:36:50 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>		//cout
#include <vector>		//vector container
#include <string>		//string
#include <algorithm>	//stansform()
#include <cctype>		//toupper
#include <numeric>		//accumulate()

std::string	my_toupper(std::string s)
{
	std::transform(s.begin(), s.end(), s.begin(), (int(*)(int))std::toupper);
	return (s);
}

std::string	my_join(std::string a, std::string b)
{
	std::string result;

	result = a + ' ' + b;
	return (result);
}

int	main(int ac, char **av)
{
	std::string	megaphone;

	std::vector<std::string> args(av + 1, av + ac);
	std::transform(args.begin(), args.end(), args.begin(), &my_toupper);
	megaphone = std::accumulate(args.begin() + 1, args.end(), args[0], &my_join);
	std::cout << megaphone << std::endl;
	return (0);
}