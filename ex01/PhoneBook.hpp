/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:38:49 by athonda           #+#    #+#             */
/*   Updated: 2025/04/13 14:58:55 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		nextIndex;
	int		count;

public:
	PhoneBook();

	void addContact();
	void searchContact() const;
	void displayContacts() const;
	void displayContactDetails(int index) const;
};
#endif