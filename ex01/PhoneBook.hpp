#pragma once

#include <string>
#include <iomanip>
#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include "Contact.hpp"


class PhoneBook
{
private:
    Contact contacts[8];
    int     count;

public:
    PhoneBook();
    //~PhoneBook();
    void Add();
    void Search();
};
