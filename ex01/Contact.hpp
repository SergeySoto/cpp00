#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
public:
	Contact(void);
	~Contact(void);
	std::string	getName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;
	void	setName(std:: string);
	void	setLastName(std:: string);
	void	setNickName(std:: string);
	void	setPhoneNumber(std:: string);
	void	setDarkestSecret(std:: string);
};

#endif