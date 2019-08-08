#define _CRT_SECURE_NO_WARNINGS
#include"person.h"
#include<iostream>
#include<string>
#include<cstring>

Person::Person(const std::string& lname, const char* fname)
{
	m_lastname = lname;
	strcpy(m_firstname, fname);
}

void Person::show()const
{
	std::cout << m_firstname << " " << m_lastname;
}

void Person::formal_show()const
{
	std::cout << m_lastname << ", " << m_firstname;
}