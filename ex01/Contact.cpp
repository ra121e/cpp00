/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:04:12 by athonda           #+#    #+#             */
/*   Updated: 2025/04/12 17:53:11 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

std::string	Contact::getFirstName() const
{
	return (firstName);
}

std::string	Contact::getLastName() const
{
	return (lastName);
}

std::string	Contact::getNickName() const
{
	return (nickName);
}

std::string	Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (darkSecret);
}

/**
 * setter methods
 */

void	Contact::setFirstName(const std::string &s)
{
	this->firstName = s;
}

void	Contact::setLastName(const std::string &s)
{
	this->lastName = s;
}

void	Contact::setnickName(const std::string &s)
{
	this->nickName = s;
}

void	Contact::setPhoneNumber(const std::string &s)
{
	this->phoneNumber = s;
}

void	Contact::setDarkestSecret(const std::string &s)
{
	this->darkestSecret = s;
}

void	Contact::displayDetails() const
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}