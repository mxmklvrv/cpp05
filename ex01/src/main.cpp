#include "Bureaucrat.hpp"


void test1(){
	std::cout << "\nBasic fail test" << std::endl;
	try
	{
		Bureaucrat("Doom", 666);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat("Tiny", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}

void test2(){
	std::cout << "\nBasic very nice test" << std::endl;
	try
	{
		Bureaucrat marci("Marci", 69);
		std::cout << marci << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test3(){
	std::cout << "\nBasic increment test" << std::endl;
	try
	{
		Bureaucrat abaddon("abaddon", 69);
		std::cout << abaddon << " before the inc" << std::endl;
		for(int i = 0; i < 5; i++)
			abaddon.incrementGrade();
		std::cout << abaddon << " after the inc" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
	try
	{
		Bureaucrat bane("bane", 69);
		std::cout << bane << " before the inc" << std::endl;
		for(int i = 0; i < 100; i++)
			bane.incrementGrade();
		std::cout << bane << " after the inc" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}


}

void test4(){
	std::cout << "\nBasic decrement test" << std::endl;
		try
	{
		Bureaucrat jakiro("jakiro", 69);
		std::cout << jakiro << " before the dec" << std::endl;
		for(int i = 0; i < 5; i++)
			jakiro.decrementGrade();
		std::cout << jakiro << " after the dec" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
	try
	{
		Bureaucrat slardar("slardar", 69);
		std::cout << slardar << " before the dec" << std::endl;
		for(int i = 0; i < 100; i++)
			slardar.decrementGrade();
		std::cout << slardar << " after the inc" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
}

int main(){
	test1();
	test2();
	test3();
	test4();
}