#include "contact.hpp"
#include <iostream>

// SETTER

void Contact::setFirstName(const std::string& fn)
{
    this->firstName = fn;
}

void Contact::setLastName(const std::string& ln)
{
    this->lastName = ln;
}

void Contact::setNickname(const std::string& nn)
{
    this->nickname = nn;
}

void Contact::setPhoneNumber(const std::string& pn)
{
    this->phoneNumber = pn;
}

void Contact::setDarkestSecret(const std::string& ds)
{
    this->darkestSecret = ds;
}

// GETTER

std::string Contact::getFirstName() const
{
    return this->firstName;
}

std::string Contact::getLastName() const
{
    return this->lastName;
}

std::string Contact::getNickname() const
{
    return this->nickname;
}

std::string Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->darkestSecret;
}


void Contact::printContact() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}