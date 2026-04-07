#include "AForm.hpp"


AForm::AForm(const std::string& name, int gradeToSign, int gradeToExec):
	_name(name),
	_signed(false),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	if(gradeToSign < 1 || gradeToExec < 1){
		std::cout << "Form: ";
		throw GradeTooHighException();
	}
	if(gradeToSign > 150 || gradeToExec > 150){
		std::cout << "Form: ";
		throw GradeTooLowException();
	}
}
AForm::AForm(const AForm& other) :
	_name(other.getName()),
	_signed(other.getSignStatus()),
	_gradeToSign(other.getGradeToSign()),
	_gradeToExec(other.getGradeToExec())
{}
AForm& AForm::operator=(const AForm& other){
	if(this != &other)
		_signed = other.getSignStatus();
	return *this;
}

AForm::~AForm(){}

void AForm::beSigned(const Bureaucrat& body){
	if(body.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	if(getSignStatus() == true)
		throw AlreadySignedException();
	_signed = true;
}

const std::string& AForm::getName() const{
	return _name;
}

int AForm::getGradeToSign() const{
	return _gradeToSign;
}

int AForm::getGradeToExec() const{
	return _gradeToExec;
}

bool AForm::getSignStatus() const{
	return _signed;
}

const char* AForm::GradeTooHighException::what() const noexcept{
	return "grade too high";
}

const char* AForm::GradeTooLowException::what() const noexcept{
	return "grade too low";
}

const char* AForm::AlreadySignedException::what() const noexcept{
	return "form already signed";
}

std::ostream& operator<<(std::ostream& out, const AForm& paper){
	out << "Form: " << paper.getName() << " is ";
	if(paper.getSignStatus() == true)
		out << "signed." << std::endl;
	else
		out << "not signed." << std::endl;
	out << "Min grade to sign " << paper.getGradeToSign() << ", Min grade to exec " << paper.getGradeToExec() << std::endl;
	return out;
}
