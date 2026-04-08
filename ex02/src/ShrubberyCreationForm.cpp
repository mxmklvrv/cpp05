#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
	AForm("Shrubbery Creation Form", 145, 45){
		_target = target;
	}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
	AForm(other){
		_target = other._target;
	}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
	AForm::operator=(other);
	if(this != &other)
		_target = other._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

const char* ShrubberyCreationForm::FileOpenError::what() const noexcept{
	return "Error, could not open file.";
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	if(getSignStatus() == false)
		throw NotSignedException();
	if(executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	std::ofstream of(_target + "_shrubbery");
	if(!of.is_open())
		throw FileOpenError();

	of
	<< "                 re\n"
	<< "                tree\n"
	<< "               treetree\n"
	<< "              treetreetree\n"
	<< "             treetreetreetree\n"
	<< "            treetreetreetreetree\n"
	<< "           treetreetreetreetreetree\n"
	<< "          treetreetreetreetreetreetree\n"
	<< "         treetreetreetreetreetreetreetree\n"
	<< "        treetreetreetreetreetreetreetreetree\n"
	<< "                 |||||\n"
	<< "                 |||||\n"
	<< "                 |||||\n"
	<< "                 |||||\n"
	<< "            ==============\n"
	<< std::endl;
	of.close();
	std::cout << "Shrubbery created into " << _target + "_shrubbery" << std::endl;
}