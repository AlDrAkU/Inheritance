#include "stdafx.h"
#include "Derived.h"

Derived::Derived(int iValue,double value)
	: Base{ iValue }
	, m_AddedValue{ value }
	


	//, m_Value{iValue} // not possible
{
	std::cout << "Derived class constructor." << std::endl;
	std::cout << "  m_ProtectedValue is:" << m_ProtectedValue << std::endl;
	m_ProtectedValue = 6546456;
}
Derived::~Derived()
{
	std::cout << "Derived class destructor." << std::endl;
}
double Derived::GetAddedValue() const
{
	return m_AddedValue;
}
void Derived::Identify() const
{
	std::cout << " Derived class. m_AddedValue is: " << m_AddedValue << std::endl;
}
