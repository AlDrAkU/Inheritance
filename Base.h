#pragma once
class Base
{
public:
	Base(int value);
	~Base();
	void Identify() const;
	int GetValue() const;
protected:
	int m_ProtectedValue;
	void SetValue(int value);

private:
	int m_Value;

};

