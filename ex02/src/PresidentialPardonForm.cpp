#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
	AForm("Presidential Pardon Form", 25, 5){
		_target = target;
	}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	AForm(other){
	_target = other._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
	AForm::operator=(other);
	if(this != &other)
		_target = other._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
	if(getSignStatus() == false)
		throw NotSignedException();
	if(executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

