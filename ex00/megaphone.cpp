/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:39:48 by athonda           #+#    #+#             */
/*   Updated: 2025/04/10 14:55:54 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>		//cout
#include <string>		//string, find_first_not_of(), find_last_not_of()
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

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i = 1; i < ac; ++i)
	{
		std::string	s(av[i]);
		s = my_trim(s);
		for (j = 0; s[j] != '\0'; ++j)
		{
			s[j] = std::toupper(static_cast<unsigned char>(s[j]));
		}
		std::cout << s;
		if (i < ac - 1)
		{
			std::cout << " ";
		}
		else
			std::cout << std::endl;
	}
	return (0);
}