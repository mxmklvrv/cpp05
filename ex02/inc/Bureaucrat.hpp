#pragma once

#include <string>
#include <exception>
#include <iostream>
#include <AForm.hpp>

class AForm;
class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat(void);
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();

	const std::string& getName() const;
	int getGrade() const;
	void incrementGrade(void);
	void decrementGrade(void);

	void signForm(AForm& paper);
	void executeForm(const AForm& form);

	class GradeTooHighException : public std::exception{
		public:
			const char* what() const noexcept override;
	};

	class GradeTooLowException : public std::exception{
		public:
			const char* what() const noexcept override;
	};

};


std::ostream& operator<<(std::ostream& out, const Bureaucrat& body);