#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
	const std::string _name;
	bool	_signed;
	const int _gradeToSign;
	const int _gradeToExec;

public:
	AForm() = delete;
	AForm(const std::string& name, int gradeToSign, int gradeToExec);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	virtual ~AForm();

	const std::string& getName() const;
	int	getGradeToSign() const;
	int getGradeToExec() const;
	bool getSignStatus() const;

	void	beSigned(const Bureaucrat& body);
	virtual void execute( const Bureaucrat& executor) const = 0;

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

	class NotSignedException : public std::exception{
		public:
			const char* what() const noexcept override;
	};

};

std::ostream& operator<<(std::ostream& out, const AForm& paper);