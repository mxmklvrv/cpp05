#include "RobotomyRequestForm.hpp"

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