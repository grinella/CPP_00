#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string cmd;
	while (true) {
		std::cout << "Scegli tra ADD, SEARCH and EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD") {
			phonebook.Add();
		}
		else if (cmd == "SEARCH") {
			phonebook.Search();
		}
		else if (cmd == "EXIT") {
			break ;
		}
		else {
			std::cout << "Comando sconosciuto!" << std::endl;
		}
	}
	return 0;
}