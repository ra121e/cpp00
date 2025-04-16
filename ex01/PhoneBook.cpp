/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:22:37 by athonda           #+#    #+#             */
/*   Updated: 2025/04/16 13:38:07 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
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

//	std::cin.ignore();
	std::cout << "Enter First Name: ";
	std::getline(std::cin, input);
	contacts[nextIndex].setFirstName(input);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	contacts[nextIndex].setLastName(input);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	contacts[nextIndex].setNickName(input);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	contacts[nextIndex].setPhoneNumber(input);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, input);
	contacts[nextIndex].setDarkestSecret(input);

	nextIndex = (nextIndex + 1) % 8;

	if (count < 8)
	{
		count = count + 1;
	}
}

void PhoneBook::searchContact() const
{
	if (count == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	displayContacts();

	int	index;
	std::cout << "Enter index to display detail [0-" << count - 1 << "]: ";
	std::cin >> index;

	contacts[index].displayDetails();
//	contacts[0].displayDetails();
//	contacts[1].displayDetails();
//	contacts[2].displayDetails();
//	contacts[3].displayDetails();
//	contacts[4].displayDetails();
//	contacts[5].displayDetails();
//	contacts[6].displayDetails();
//	contacts[7].displayDetails();
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
