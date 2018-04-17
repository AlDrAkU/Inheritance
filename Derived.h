#pragma once
#include "Base.h"
class Derived: public Base
{
public:
	explicit Derived(int iValue,double value);
	~Derived();
	double GetAddedValue() const;
	void Identify() const;

private:
	double m_AddedValue;


};