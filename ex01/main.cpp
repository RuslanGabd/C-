/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:03:58 by rgabdrak          #+#    #+#             */
/*   Updated: 2025/07/07 11:04:02 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "main.hpp"

std::string getUserInput(std::string message)
{
	std::string user_input = "";

	while (user_input.length() == 0)
	{
		std::cout << message;
		std::getline(std::cin, user_input);
	}
	return (user_input);
}

void add_contact(PhoneBook *phoneBook)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	first_name = getUserInput("Enter first name: ");
	last_name = getUserInput("Enter last name: ");
	nick_name = getUserInput("Enter nick name: ");
	phone_number = getUserInput("Enter phone number: ");
	darkest_secret = getUserInput("Enter darkest secret: ");
	phoneBook->addContact(first_name , last_name, nick_name, phone_number, darkest_secret);
}

int main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while(1)
	{
		std::cout << std::endl << "Type ADD to save a new contact, SEARCH to search for a contact or EXIT to exit the program" << std::endl;
		std::cout << "Enter command: ";
		if (!(std::getline(std::cin, command)))
			return (1);
		if (command.compare("ADD") == 0)
			add_contact(&phoneBook);
		else if (command.compare("SEARCH") == 0)
			search_contact(&phoneBook);
		else if(command.compare("EXIT") == 0)
			break;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}
