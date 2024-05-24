#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string cmd;
	system("clear");
	while (true) {
		std::cout << "Scegli tra ADD, SEARCH and EXIT" << std::endl;
		if (!std::getline(std::cin, cmd)) {
            std::cout << "^D" << std::endl;
			break ;
        }
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
			system("clear");
			std::cout << "Comando sconosciuto!" << std::endl << std::endl << "RIPROVA" << std::endl << std::endl;
		}
	}
	return 0;
}