/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:22:37 by athonda           #+#    #+#             */
/*   Updated: 2025/04/13 19:02:58 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	nextIndex = 0;
	count = 0;
}

void	PhoneBook::addContact()
{
	std::string	input;

	std::cout << "Enter First Name: ";
	std::cin >> input;
	contacts[nextIndex].setFirstName(input);
	std::cout << "Enter Last Name: ";
	std::cin >> input;
	contacts[nextIndex].setLastName(input);
	std::cout << "Enter Nickname: ";
	std::cin >> input;
	contacts[nextIndex].setNickName(input);
	std::cout << "Enter Phone Number: ";
	std::cin >> input;
	contacts[nextIndex].setPhoneNumber(input);
	std::cout << "Enter Darkest Secret: ";
	std::cin >> input;
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
	contacts[0].displayDetails();
	contacts[1].displayDetails();
	contacts[2].displayDetails();
	contacts[3].displayDetails();
	contacts[4].displayDetails();
	contacts[5].displayDetails();
	contacts[6].displayDetails();
	contacts[7].displayDetails();
}

void displayContacts()
{

}

void displayContactDetails(int index)
{

}