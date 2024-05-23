#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	count = 0;
}

void PhoneBook::Add()
{
	Contact newContact;

	newContact.setFirstName();
	if (newContact.getFirstName().empty()) return;

	newContact.setLastName();
	if (newContact.getLastName().empty()) return;

	newContact.setNickname();
	if (newContact.getNickname().empty()) return;

	newContact.setPhoneNumber();
	if (newContact.getPhoneNumber().empty()) return;

	newContact.setDarkestSecret();
	if (newContact.getDarkestSecret().empty()) return;

	if (count < 8)
	{
		contacts[count] = newContact;
		count++;
	}
	else
	{
		for (int i = 1; i < 8; i++)
		{
			contacts[i-1] = contacts[i];
		}
		contacts[7] = newContact;
	}
}

void PhoneBook::Search()
{
	std::string search;

	std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < count; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|"
                  << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|"
                  << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) 
				  << std::endl;
    }
	std::cout << "Fai una ricerca attraverso l'ndice:" << std::endl;
	std::getline(std::cin, search);
	if (isalnum(atoi(search.c_str())) == 0) {
		int i = atoi(search.c_str());
		std::cout << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << std::endl
                  << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << std::endl
                  << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) << std::endl
				  << std::setw(10) << (contacts[i].getPhoneNumber().length() > 10 ? contacts[i].getPhoneNumber().substr(0, 9) + "." : contacts[i].getPhoneNumber()) << std::endl
                  << std::setw(10) << (contacts[i].getDarkestSecret().length() > 10 ? contacts[i].getDarkestSecret().substr(0, 9) + "." : contacts[i].getDarkestSecret()) << std::endl;
	}
}
