#include <iostream>
using namespace std;

//Base or super class
class Parent
{
	public:
		int id_p;
};

//sub class
class Child : public Parent
{
	public:
		int id_c;
};

int main6666()
{
	Child obj1;
	obj1.id_p = 8;
	obj1.id_c = 9;

	cout << " Parent : " << obj1.id_p << endl;
	cout << "Child : " << obj1.id_c << endl;
	return 0;
}