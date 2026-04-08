#include "RobotomyRequestForm.hpp"
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
	AForm("RobotomyRequestForm", 72, 45){
		_target = target;
	}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	AForm(other){
		_target = other._target;
	}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
	AForm::operator=(other);
	if(this != &other)
		_target = other._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
	if(getSignStatus() == false)
		throw NotSignedException();
	if(executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	srand(time(0));
	int blessRNG = rand() % 2;

	if(blessRNG == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " robotomy has failed." << std::endl;
}