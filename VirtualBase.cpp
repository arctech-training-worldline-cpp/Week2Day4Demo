#include <iostream>
using namespace std;

class Person
{
	private:
		int xVal;
	public:
		Person(int x)
		{
			xVal = x;
			cout << "Person :: Person(int) called " << endl;
		}
		Person()
		{
			cout << "Person  default construcor" << endl;
		}
};

class Faculty : virtual public Person
{
	public:
		Faculty(int x):Person(x)
		{
			cout << "Faculty :: Faculty (int x) called " << endl;
		}
};

class Student : virtual public Person
{
	public:
		Student(int x) : Person(x)
		{
			cout << "Student :: Student(int x) called" << endl;
		}
};

class TA : public Faculty, public Student
{
	public:
		TA(int x):Faculty(x), Student(x), Person(x){
			cout << "TA::TA(int x) is called" << endl;
		}
};

int main123333()
{
	TA tal(12);
	//cout << tal.xVal << endl;
	return 0;
}