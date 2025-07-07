
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
		std::string _darkest_secret;
		time_t	    _created;

	public:
		Contact();
		~Contact();
		Contact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret);

		std::string getLastName() const;
		std::string getFirstName() const;
		std::string getNickName() const;
		std::string getPhoneNumber () const;
		std::string getDarkestSecret () const;
		time_t	getCreated() const;
};

#endif
