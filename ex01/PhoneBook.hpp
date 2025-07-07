/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:02:19 by rgabdrak          #+#    #+#             */
/*   Updated: 2025/07/07 11:02:26 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>
# include "Contact.hpp"


# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		int 	_num_entries;

	public:
		Contact contacts[MAX_CONTACTS];
		// Constructors
		PhoneBook();
		~PhoneBook();

		// Member functions
		void addContact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret);
		int getNumEntries();
};

int		search_oldest_entrie(Contact contacts[MAX_CONTACTS]);
#endif
