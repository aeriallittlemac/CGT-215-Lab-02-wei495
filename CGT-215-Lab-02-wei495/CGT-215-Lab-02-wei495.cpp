// CGT-215-Lab-02-wei495.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	
	float A;
	float B;
	cout << "Hello, my name is Jeff and I'm going to solve the equation:" << endl;
	cout << "Ax + B = 0" << endl;
	cout << "For x" << endl;
	cout << endl; //The endls are just to emulate the format of the output example
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	
	if (B >= 0) {
		cout << "Solving " << A << "x" <<"+"<< B <<"=0 for x..."<< endl;
	}
	else {
		cout << "Solving " << A << "x" << B << "=0 for x..." << endl; //avoids "+-B"
	}
	cout << endl;
	cout << "The answer is:" << endl;
	if (A == 0) { //avoids x = infinity
		cout << "x= any x";
	}
	else {
		cout << "x=" << -B / A << endl;
	}
}
