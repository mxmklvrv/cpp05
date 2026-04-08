#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

void test1(){
	std::cout << "ShrubberyCreationForm test" << std::endl << std::endl;
	try
	{
		Bureaucrat m("Maxim", 1);
		Intern intern;
		AForm* a;

		std::cout << m << std::endl;
		a = intern.makeForm("shrubbery creation", "vodka");
		std::cout << *a << std::endl;
		m.signForm(*a);
		m.executeForm(*a);
		std::cout << *a << std::endl;
		delete a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test2(){
	std::cout << "PresidentialPardonForm test" << std::endl << std::endl;
	try
	{
		Bureaucrat mm("Maxim2", 1);
		Intern intern1;
		AForm* aa;

		std::cout << mm << std::endl;
		aa = intern1.makeForm("presidential pardon", "pivo");
		std::cout << *aa << std::endl;
		mm.signForm(*aa);
		mm.executeForm(*aa);
		std::cout << *aa << std::endl;
		delete aa;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test3(){
	std::cout << "RobotomyRequestForm test" << std::endl << std::endl;
	try
	{
		Bureaucrat mmm("Maxim3", 1);
		Intern intern2;
		AForm* aaa;

		std::cout << mmm << std::endl;
		aaa = intern2.makeForm("robotomy request", "tekila");
		std::cout << *aaa << std::endl;
		mmm.signForm(*aaa);
		mmm.executeForm(*aaa);
		std::cout << *aaa << std::endl;
		delete aaa;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test4(){
	std::cout << "Form fail test" << std::endl << std::endl;
	try
	{
		Bureaucrat n("NotMaxim", 1);
		Intern intern3;
		AForm* p;

		std::cout << n << std::endl;
		p = intern3.makeForm("free shots", "vodka");
		std::cout << *p << std::endl;
		n.signForm(*p);
		n.executeForm(*p);
		std::cout << *p << std::endl;
		delete p;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test5(){
	std::cout << "No sign test" << std::endl << std::endl;
	try
	{
		Bureaucrat nn("NotMaxim2", 149);
		Intern intern4;
		AForm* pp;

		std::cout << nn << std::endl;
		pp = intern4.makeForm("presidential pardon", "rum");
		std::cout << *pp << std::endl;
		nn.signForm(*pp);
		nn.executeForm(*pp);
		std::cout << *pp << std::endl;
		delete pp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test6(){
	std::cout << "No exec test" << std::endl << std::endl;
	try
	{
		Bureaucrat nnn("NotMaxim3", 52);
		Intern intern5;
		AForm* ppp;

		std::cout << nnn << std::endl;
		ppp = intern5.makeForm("shrubbery creation", "wine");
		std::cout << *ppp << std::endl;
		nnn.signForm(*ppp);
		nnn.executeForm(*ppp);
		std::cout << *ppp << std::endl;
		delete ppp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


int main(){
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
}