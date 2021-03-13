// Program to explain Simple Class and Object
#include <iostream>
using namespace std;
#define  PI  3.14

class Circle
{
private:
	float radius;
public:
	void getRadius()
	{
		cout << "Enter Radius ::: ";
		cin >> radius;
	}

	void area()
	{
		float ar;
		ar = PI * radius * radius;
		cout << "\n Area of Circle : " << ar;
	}

	void showRadius()
	{
		cout << "\n Radius : " << radius;
	}
};

int main()
{
	Circle c1;

	c1.getRadius();
	c1.showRadius();
	c1.area();

	return 0;
}
