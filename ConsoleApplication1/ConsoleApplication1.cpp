// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <stdio.h>
#include<string>
class age
{
public:
	age(double );
	age();
	
	double dob;
};

age::age(double age)
{
	this->dob=age;
}

age::age()
{
}

int main()
{
	age stu;
	cout << "please enter your age" << endl;
	cin >> stu.dob;
	if (stu.dob > 1 && stu.dob <100)
		cout << "you are human";
	else
	{
		cout << "please enter your rreal age";
	}





	

		system("pause");
    return 0;
}
