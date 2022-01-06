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
		int GetX()
		{
			return xVal;
		}
};

class Faculty : public Person
{
	public:
		Faculty(int x):Person(x)
		{
			cout << "Faculty :: Faculty (int x) called " << endl;
		}
};

class Student : public Person
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
		TA(int x):Faculty(x), Student(x){
			cout << "TA::TA(int x) is called" << endl;
		}

		int GetX()
		{
			return Student::GetX();
		}
};

int main232323()
{
	TA tal(12);
	// cout << tal.Student::GetX();
	// cout << tal.Faculty::GetX();
	cout << tal.GetX();
	return 0;
}