// 11.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int *x;

	cout << "Enter an integer for array size " << endl;
	 
	int size;
	cin >> size;

	x = new int[size];

	cout << "Enter numbers into the array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> x[i];
	}

	int total = 0;
	int count = 0;
	for (int a = 0; a < size; a++) {
		count++;
		total = total + x[a];
	}

	int average = total / count;

	cout << "The average is " << average << endl;

	int above = 0;
	for (int b = 0; b < size; b++)
	{
		if (x[b] > average)
			above++;
		else;
	}
	
	cout << above << " numbers are above the average. " << endl;

	delete[] x;

}

