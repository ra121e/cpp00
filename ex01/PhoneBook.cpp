/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:22:37 by athonda           #+#    #+#             */
/*   Updated: 2025/04/22 21:27:48 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>			// string
#include <sstream>			// stringstream
#include <iomanip>			// setw()
#include <cctype>			// isdigit()
#include <cstdlib>			// atoi()
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	nextIndex = 0;
	count = 0;
}

void	PhoneBook::addContact()
{
	std::string	input;

	do{
		std::cout << "Enter First Name: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Field cannot be empty. try again." << std::endl;
	} while (input.empty());
	contacts[nextIndex].setFirstName(input);

	do{
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Field cannot be empty. try again." << std::endl;
	} while (input.empty());
	contacts[nextIndex].setLastName(input);

	do{
		std::cout << "Enter Nickname: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Field cannot be empty. try again." << std::endl;
	} while (input.empty());
	contacts[nextIndex].setNickName(input);

	do{
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Field cannot be empty. try again." << std::endl;
	} while (input.empty());
	contacts[nextIndex].setPhoneNumber(input);

	do{
		std::cout << "Enter Darkest Secret: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Field cannot be empty. try again." << std::endl;
	} while (input.empty());
	contacts[nextIndex].setDarkestSecret(input);

	nextIndex = (nextIndex + 1) % 8;

	if (count < 8)
		count = count + 1;
}

void PhoneBook::searchContact() const
{
	if (count == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	displayContacts();

	std::string input;
	int	index;
	std::cout << "Enter index to display detail [0-" << count - 1 << "]: ";
	std::getline(std::cin, input);

	bool	yesDigit = true;
	for (std::string::const_iterator it = input.begin(); it != input.end(); ++it)
	{
		if (!isdigit(*it))
			yesDigit = false;
	}

	if (!yesDigit || input.empty())
	{
		std::cout << "Invalid Input" << std::endl;
		return ;
	}

	std::stringstream	ss;
	ss.str(input);
	ss.operator>>(index);
	if (index < 0 || index >= count)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}

	contacts[index].displayDetails();
}

void PhoneBook::displayContacts() const
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;

	std::cout << std::string(43, '-') << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i << "|";

		std::string firstName = contacts[i].getFirstName();
		if (firstName.length() > 10)
		{
			firstName = firstName.substr(0, 9) + ".";
		}
		std::cout << std::setw(10) << firstName << "|";
		std::string lastName = contacts[i].getLastName();
		if (lastName.length() > 10)
		{
			lastName = lastName.substr(0, 9) + ".";
		}
		std::cout << std::setw(10) << lastName << "|";
		std::string nickName = contacts[i].getNickName();
		if (nickName.length() > 10)
		{
			nickName = nickName.substr(0, 9) + ".";
		}
		std::cout << std::setw(10) << nickName << std::endl;
	}
}
