#include "stdafx.h"
#include "Base.h"


Base::Base(int value) :m_Value{ value }, m_ProtectedValue{ rand() }
{
	std::cout << "Base class constructor." << std::endl;
	std::cout << "  m_ProtectedValue is:" << m_ProtectedValue << std::endl;
	m_ProtectedValue = 6546456;
}
Base::~Base()
{
	std::cout << "Base class destructor." << std::endl;
}
void Base::Identify() const
{
	std::cout << " All your base are belong to us. Base object m_Value is:"<< m_Value << std::endl;
	std::cout << "  m_ProtectedValue is:" << m_ProtectedValue << std::endl;
}
int Base::GetValue() const
{
	return m_Value;
}

void Base::SetValue(int value)
{
	m_ProtectedValue = value;

}
