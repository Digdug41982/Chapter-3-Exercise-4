// Chapter 3 Exercise 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int rcb;

	cout << "Enter the replacement cost of your building: ";
	cin >> rcb;
	int insurance = rcb * 0.8;
	cout << "The insurance coverage for your building is: " << insurance << endl;
	return 0;
}


