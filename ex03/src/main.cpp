#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

void test1(){
	std::cout << "ShrubberyCreationForm test" << std::endl << std::endl;
	try
	{
		Bureaucrat a("Maxim", 33);
		std::cout << a << std::endl;
		ShrubberyCreationForm qwe("pivo");
		a.signForm(qwe);
		a.executeForm(qwe);
		std::cout << qwe << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat b("Not Maxim", 140);
		std::cout << b << std::endl;
		ShrubberyCreationForm asd("more pivo");
		b.signForm(asd);
		b.executeForm(asd);
		std::cout << asd << std::endl;
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
		Bureaucrat c("Maximilian", 2);
		std::cout << c << std::endl;
		PresidentialPardonForm zxc("vodka");

		c.signForm(zxc);
		c.executeForm(zxc);
		std::cout << zxc << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat d("Not Maximilian", 23);
		std::cout << d << std::endl;
		PresidentialPardonForm iop("alcohol free vodka");
		d.signForm(iop);
		d.executeForm(iop);
		std::cout << iop << std::endl;
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
		Bureaucrat e("Maxi", 6);
		std::cout << e << std::endl;
		RobotomyRequestForm jkl("pelmeny");
		e.signForm(jkl);
		e.executeForm(jkl);

		std::cout << jkl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat f("Not Maxi", 70);
		std::cout << f << std::endl;
		RobotomyRequestForm bnm("beans");
		f.signForm(bnm);
		f.executeForm(bnm);

		std::cout << bnm << std::endl;
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
}
