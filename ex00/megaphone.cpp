#include <iostream>

int main (int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; argv[i]; i++) {
			std::string  stringa = argv[i];
			for (size_t j = 0; j < stringa.size(); j++) {
				stringa[j]=toupper(stringa[j]);
				std::cout << stringa[j];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
