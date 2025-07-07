/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:15:55 by rgabdrak          #+#    #+#             */
/*   Updated: 2025/07/07 12:26:23 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <ctime>

class Contact
{
	private:
		std::string _last_name;
		std::string _first_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkset_secret;
		time_t	    _created;

	public:
		Contact();
		~Contact();
		Contact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret);

		std::string getLastName() const;
		std::string getFirstName() const;
		std::string getNickName() const;
		std::getDarksetSecret () const;
		time_t	getCreated() const;
}
#endif
