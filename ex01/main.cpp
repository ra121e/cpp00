/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:53:58 by athonda           #+#    #+#             */
/*   Updated: 2025/04/13 19:01:31 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook	phonebook;
/*
	Contact contact;
    // 連絡先情報を設定
	contact.setFirstName("John");
	contact.setLastName("Doe");
	contact.setNickName("JD");
	contact.setPhoneNumber("123-456-7890");
	contact.setDarkestSecret("I don't like vegetables");


	// ゲッターでデータを取得して表示
	std::cout << "\nGetter test:" << std::endl;
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickName() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;

	// displayDetails メソッドのテスト
	std::cout << "\nDisplay method test:" << std::endl;
	contact.displayDetails();
*/
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> command;

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
			// TODO EXIT operation
			break ;
		}
		command = "";
	}
	return (0);
}