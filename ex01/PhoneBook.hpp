/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:38:49 by athonda           #+#    #+#             */
/*   Updated: 2025/04/12 16:43:38 by athonda          ###   ########.fr       */
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

Public:

	PhoneBook();

	void addContact();
	void searchContact() const;
	void displayContacts() const;
	void displayContactDetails(int index) const;

};


#endif