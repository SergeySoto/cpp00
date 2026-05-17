#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	Contact(void);
	~Contact(void);
	std::string	getName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
	void	setName(std:: string);
	void	setLastName(std:: string);
	void	setNickName(std:: string);
	void	setPhoneNumber(std:: string);
	void	setDarkestSecret(std:: string);
};

#endif