// Test_1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	cout << "Input something" << endl;
	cin >> input;

	for (size_t i = 0; i < input.length(); i++)
	{
		cout << input[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

