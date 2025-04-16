/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:39:48 by athonda           #+#    #+#             */
/*   Updated: 2025/04/16 18:16:17 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>		//cout
#include <string>		//string, find_first_not_of(), find_last_not_of()
#include <cctype>		//toupper()

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
		for (j = 0; s[j] != '\0'; ++j)
		{
			s[j] = std::toupper(static_cast<unsigned char>(s[j]));
		}
		std::cout << s;
	}
	std::cout << std::endl;
	return (0);
}