/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:53:58 by athonda           #+#    #+#             */
/*   Updated: 2025/04/22 21:14:08 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			phonebook.addContact();
		}
		else if (command == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (command == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "Invalid command. enter ADD, SEARCH or EXIT." << std::endl;
		}
	}
	return (0);
}