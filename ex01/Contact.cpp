#include "Contact.hpp"
#include <iostream>

// SETTER

void Contact::setFirstName()
{
    std::cout << "Inserire Nome:" << std::endl;
    std::getline(std::cin, this->firstName);
    if (firstName.empty())
    {
        std::cout << "Errore: Nome Vuoto" << std::endl;
    }
}

void Contact::setLastName()
{
    std::cout << "Inserire Cognome:" << std::endl;
    std::getline(std::cin, this->lastName);
    if (lastName.empty())
    {
        std::cout << "Errore: Cognome Vuoto" << std::endl;
    }
}

void Contact::setNickname()
{
    std::cout << "Inserire Soprannome:" << std::endl;
    std::getline(std::cin, this->nickName);
    if (nickName.empty())
    {
        std::cout << "Errore: Soprannome Vuoto" << std::endl;
    }
}

void Contact::setPhoneNumber()
{
    std::cout << "Inserire Numero:" << std::endl;
    std::getline(std::cin, this->phoneNumber);
    //isalnum????
    if (phoneNumber.empty())
    {
        std::cout << "Errore: Numero vuoto" << std::endl;
    }
}

void Contact::setDarkestSecret()
{
    std::cout << "Inserire Segreto Oscuro:" << std::endl;
    std::getline(std::cin, this->darkestSecret);
    if (darkestSecret.empty())
    {
        std::cout << "Errore: Segreto Oscuro vuoto" << std::endl;
    }
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
    return this->nickName;
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
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}