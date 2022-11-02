#include <iostream>
using namespace std;

void main()
{
	int gradePercentage;
	cout << "please enter your grade percentage.." << endl;
	cin >> gradePercentage;
	if (gradePercentage < 0 || gradePercentage > 100)
	{
		cout << "invalid grade percentage, please try again.." << endl;
	}
	else if (gradePercentage >= 85 && gradePercentage <= 100)
	{
		cout << "your grade is A" << endl;
	}
	else if (gradePercentage >= 75 && gradePercentage < 85)
	{
		cout << "your grade is B" << endl;
	}
	else if (gradePercentage >= 65 && gradePercentage < 75)
	{
		cout << "your grade is C" << endl;
	}
	else if (gradePercentage >= 50 && gradePercentage < 65)
	{
		cout << "your grade is D" << endl;
	}
	else if (gradePercentage >= 30 && gradePercentage < 50)
	{
		cout << "your grade is E" << endl;
	}
	else
	{
		cout << "your grade is F :(" << endl;
	}
}