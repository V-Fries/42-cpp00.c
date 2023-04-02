#include <iostream>

#include "PhoneBook.hpp"

#include "input.hpp"

int main(void) {
	PhoneBook	phoneBook;
	std::string	input;

	try {
		input = getLine("Phone book $> ");
		while (input != "EXIT") {
			if (input == "ADD")
				phoneBook.addContact();
			else if (input == "SEARCH")
				phoneBook.search();
			else
				std::cout << "Unexpected input" << std::endl;
			input = getLine("Phone book $> ");
		}
	} catch (const std::exception& ex) {
		std::cerr << ex.what() << std::endl;
 	}
}
