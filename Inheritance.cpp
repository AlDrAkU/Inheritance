// Inheritance.cpp : Defines the entry point for the console application.
//
#include "Base.h"
#include "stdafx.h"
#include "Derived.h"
void CreateDerivedObject();
int main()
{

	Base *pBase = new Base { 42 };
	pBase->Identify();
	delete pBase;
	std::cout << std::endl;
	std::cout << std::endl;

	CreateDerivedObject();

	std::cin.get();
    return 0;
}
void CreateDerivedObject()
{
	Derived derived{52, 3.1415 };
	derived.Identify();
	std::cout<<derived.GetValue()<< std::endl;
	//derived.SetValue();
}
