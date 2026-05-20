#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_count = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called on PhoneBook" << std::endl;
	return ;
}

void PhoneBook::addContact(void)
{
	std::string temp;
	std::cout << "First name: ";
	std::getline(std::cin, temp);
	_phoneBook[_index].setName(temp);
	std::cout << "Last name: ";
	std::getline(std::cin, temp);
	_phoneBook[_index].setLastName(temp);
	std::cout << "Nick name: ";
	std::getline(std::cin, temp);
	_phoneBook[_index].setNickName(temp);
	std::cout << "Phone number: ";
	std::getline(std::cin, temp);
	_phoneBook[_index].setPhoneNumber(temp);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, temp);
	_phoneBook[_index].setDarkestSecret(temp);
	_index = (_index + 1) % 8;
	if (_count < 8)
		++_count;
}

void PhoneBook::searchContact(void) const
{
	std::string str;
	str = PhoneBook::Contact::getName();
	for (int i = 0; i < _count; ++i)
	{
		str = str.substr(0, 9) + ".";
		if (str.length() > 10)
			std::cout << std::setw(10) << str;
	}
}