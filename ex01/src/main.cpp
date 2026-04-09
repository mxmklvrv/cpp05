#include "Bureaucrat.hpp"
#include "Form.hpp"

void test1(){
	std::cout << "\nBasic very nice test" << std::endl;
	try
	{
		Bureaucrat doom("Doom", 66);
		Form zxc("666", 111, 99);
		std::cout << doom << std::endl;
		doom.signForm(zxc);
		std::cout << zxc << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test2(){
	std::cout << "\nBasic very nice increment test" << std::endl;
	try
	{
		Bureaucrat marci("Marci", 75);
		Form asd("69", 69, 69);
		std::cout << marci << std::endl;
		marci.signForm(asd);
		std::cout << asd << std::endl;
		for(int i = 0; i < 6; i++){
			marci.incrementGrade();
			marci.signForm(asd);
		}
		std::cout << asd << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test3(){
	std::cout << "\nBasic not very nice decrement test" << std::endl;
	try
	{
		Bureaucrat abaddon("abaddon", 69);
		Form qwe("228", 71, 44);
		std::cout << abaddon << std::endl;
		std::cout << qwe <<std::endl;

		for(int i = 0; i < 3; i++){
			abaddon.decrementGrade();
			std::cout << abaddon << std::endl;
		}
		abaddon.signForm(qwe);
		std::cout << qwe << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}

}

void test4(){
	std::cout << "\nBasic very bad form test" << std::endl;
	try
	{
		Form pop("pop", -69, 123);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
	try
	{
		Form ment("ment", 222, 123);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
}

void test5(){
	std::cout << "\nBasic very constructor test" << std::endl;
	try
	{
		Form xim("123", 66 ,22);
		std::cout << xim << std::endl;
		Form ma(xim);
		std::cout << ma << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}

int main(){
	test1();
	test2();
	test3();
	test4();
	test5();
}
