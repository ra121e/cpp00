/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:39:48 by athonda           #+#    #+#             */
/*   Updated: 2025/04/10 08:27:08 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>		//cout
#include <vector>		//vector container
#include <string>		//string, find_first_not_of(), find_last_not_of()
#include <algorithm>	//transform()
#include <cctype>		//toupper()
#include <numeric>		//accumulate()

/**
 * @fn my_trim
 * @brief truncate string into substring
 * @param[in] string
 * @return string
 */

std::string	my_trim(std::string s)
{
	std::string::size_type	first;
	std::string::size_type	last;
	std::string trimed;

	first = s.find_first_not_of(" \t\n\r\f\v");
	last = s.find_last_not_of(" \t\n\r\f\v");
	trimed = s.substr(first, last - first + 1);
	return (trimed);
}

/**
 * @fn my_toupper
 * @brief replace characters to upper case
 * @param[in] string
 * @return string
 * @note
 *  -std::toupper function has overload. Need to fix the type by casting
 *  -std::transform iterates toupper to each character in the string
 */

std::string	my_toupper(std::string s)
{
	std::transform(s.begin(), s.end(), s.begin(), (int(*)(int))std::toupper);
	return (s);
}

/**
 * @fn my_join
 * @brief combine array into one single string
 * @param[in] 2 strings
 * @return string
 */

std::string	my_join(std::string a, std::string b)
{
	std::string result;

	result = a + ' ' + b;
	return (result);
}

int	main(int ac, char **av)
{
	std::string	megaphone;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::vector<std::string> args(av + 1, av + ac);
		std::transform(args.begin(), args.end(), args.begin(), &my_trim);
		std::transform(args.begin(), args.end(), args.begin(), &my_toupper);
		megaphone = std::accumulate(args.begin() + 1, args.end(), args[0], &my_join);
		std::cout << megaphone << std::endl;
	}
	return (0);
}