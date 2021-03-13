// Program to explain Simple Distance class
#include <iostream>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	void getDist()
	{
		cout << "Enter Feet ::: ";
		cin >> feet;
		cout << "Enter Inches ::: ";
		cin >> inches;
	}

	void showDist()
	{
		cout << "\n" << feet << "\'-" << inches << "\"";
	}
};

int main()
{
	Distance d1, d2;
	
	d1.getDist();
	d2.getDist();
	d1.showDist();
	d2.showDist();
	
	return 0;
}