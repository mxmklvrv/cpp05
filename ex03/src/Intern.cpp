#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void){
	_form[0] = "presidential pardon";
	_form[1] = "robotomy request";
	_form[2] = "shrubbery creation";
	func[0] = &Intern::CreatePP;
	func[1] = &Intern::CreateRR;
	func[2] = &Intern::CreateSC;
}

AForm* Intern::CreatePP(const std::string& target){
	return new PresidentialPardonForm(target);
}

AForm* Intern::CreateRR(const std::string& target){
	return new RobotomyRequestForm(target);
}

AForm* Intern::CreateSC(const std::string& target){
	return new ShrubberyCreationForm(target);
}

const char* Intern::NoFormException::what() const noexcept{
	return "Form dose not exist";
}

AForm* Intern::makeForm(const std::string& name, const std::string& target){
	for (int i = 0; i < 3; i++)
	{
		if(name == _form[i]){
			std::cout << "Intern creates " << _form[i] << std::endl;
			return (this->*func[i])(target);
		}
	}
	throw NoFormException();
}