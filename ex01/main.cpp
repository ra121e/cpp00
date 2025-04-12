/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:53:58 by athonda           #+#    #+#             */
/*   Updated: 2025/04/12 12:43:11 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	command;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT); ";
		std::cin command;

		if (command == "ADD")
		{
			// TODO ADD operation
		}
		else if (command == "SEARCH")
		{
			// TODO SEARCH operation
		}
		else if (command == "EXIT")
		{
			// TODO EXIT operation
			break ;
		}
	}
	return (0);
}