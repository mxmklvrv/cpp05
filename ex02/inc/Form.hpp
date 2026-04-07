#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string _name;
	bool	_signed;
	const int _gradeToSign;
	const int _gradeToExec;

public:
	Form() = delete;
	Form(const std::string& name, int gradeToSign, int gradeToExec);
	Form(const Form& other);
	Form& operator=(const Form& other);
	~Form();

	const std::string& getName() const;
	int	getGradeToSign() const;
	int getGradeToExec() const;
	bool getSignStatus() const;

	void	beSigned(const Bureaucrat& body);

	class GradeTooHighException : public std::exception{
		public:
			const char* what() const noexcept override;
	};

	class GradeTooLowException : public std::exception{
		public:
			const char* what() const noexcept override;
	};

	class AlreadySignedException : public std::exception{
		public:
			const char* what() const noexcept override;
	};

};

std::ostream& operator<<(std::ostream& out, const Form& paper);