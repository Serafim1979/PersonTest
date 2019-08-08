#ifndef PERSON_H_
#define PERSON_H_

#include<string>

class Person
{
private:
	static const int LIMIT = 25;
	std::string m_lastname;
	char m_firstname[LIMIT];
public:
	Person()
	{
		m_lastname = "";
		m_firstname[0] = '\0';
	}
	Person(const std::string& lname, const char* fname = "HeyYou");
	~Person()
	{
	}
	void show()const;
	void formal_show()const;
};

#endif // !PERSON_H_
