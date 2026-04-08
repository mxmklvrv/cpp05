#pragma once

#include "AForm.hpp"

class Intern
{
private:
	std::string _form[3];
	AForm* (Intern::*func[3])(const std::string& target);
public:
	Intern(void);
	Intern(const Intern& other) = delete;
	Intern& operator=(const Intern& other) = delete;
	~Intern() = default;

	AForm* CreatePP(const std::string& target);
	AForm* CreateRR(const std::string& target);
	AForm* CreateSC(const std::string& target);

	AForm* makeForm(const std::string& name, const std::string& target);

	class NoFormException: public std::exception{
		public:
			const char* what() const noexcept override;
	};

};

