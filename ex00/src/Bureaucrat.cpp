#include "Bureaucrat.hpp"
// def constructor
Bureaucrat::Bureaucrat(void) : _name("Pugna"), _grade(69){}
// constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name){
	if(grade < 1){
		std::cout << "Bureaucrat " << _name << ": ";
		throw GradeTooHighException();
	}
	else if(grade > 150){
		std::cout << "Bureaucrat " << _name << ": ";
		throw GradeTooLowException();
	}
	_grade = grade;
}
// def distr
Bureaucrat::~Bureaucrat(){}
// copy constr
Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other.getName()), _grade(other.getGrade()){}
// ass op
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	if (this != &other)
		_grade = other.getGrade();
	return *this;
}

const std::string& Bureaucrat::getName() const{
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept{
	return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept{
	return "grade too low";
}

void Bureaucrat::incrementGrade(void){
	if(_grade - 1 < 1){
		std::cout << "Bureaucrat " << _name << ": ";
		throw GradeTooHighException();
	}
	_grade--;
}

void Bureaucrat::decrementGrade(void){
	if(_grade + 1 > 150){
		std::cout << "Bureaucrat " << _name << ": ";
		throw GradeTooLowException();
	}
	_grade++;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& body){
	out << body.getName() << ", bureaucrat grade" << body.getGrade();
	return out;
}

