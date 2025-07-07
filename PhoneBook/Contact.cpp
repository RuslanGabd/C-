
#include "Contact.hpp"
Contact::Contact()
{
    _first_name = "";
    _last_name = "";
    _created = time(&_created);
}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name,
    std::string phone_number, std::string darkest_secret)
{
    _first_name = first_name;
    _last_name = last_name;
    _nick_name = nick_name;
    _phone_number = phone_number;
    _darkest_secret = darkest_secret;
    time(&_created);
}

Contact::~Contact()
{

}

std::string Contact::getLastName() const
{
    return (_last_name);
}

std::string Contact::getFirstName() const
{
    return (_first_name);
}

std::string Contact::getNickName() const
{
    return (_nick_name);
}

std::string Contact::getPhoneNumber() const
{
    return (_phone_number);
}

std::string Contact::getDarkestSecret() const
{
    return (_darkest_secret);
}

time_t  Contact::getCreated() const
{
    return (_created);
}
