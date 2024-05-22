#pragma once

#include <string>
#include "contact.hpp"


class PhoneBook
{
private:
    Contact phonebook[8];

public:
    void Add();
    void Search();
    void Exit();
};
