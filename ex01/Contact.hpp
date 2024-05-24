#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <ctype.h>
#include <stdlib.h>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

//si chiamano metodi (funzioni appartenenti ad una classe)
public:
    void setFirstName();
    void setLastName();
    void setNickname();
    void setPhoneNumber();
    void setDarkestSecret();
    
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    void printContact() const;
};
