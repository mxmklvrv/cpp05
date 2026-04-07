#pragma once

#include <string>
#include <iostream>

class Form
{
private:
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExec;
	bool	_signed;
public:
	Form() = delete;

	~Form();
};
