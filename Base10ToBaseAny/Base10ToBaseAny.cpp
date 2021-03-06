#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

int main()
{
	int InNumber = 0;
	int Base = 2;
	cout << "Base 10 number to convert: ";
	cin >> InNumber;
	cout << "Base to convert to: ";
	cin >> Base;
	vector<char> ConvertedNumber;
	bool LoopOn = true;
	while (LoopOn) {
		if (InNumber < Base) {
			if ((InNumber % Base) > 9) {
				ConvertedNumber.push_back(55 + (InNumber % Base));
			}
			else {
				ConvertedNumber.push_back(48 + InNumber);
			}
			LoopOn = false;
		}
		else {
			if ((InNumber % Base) > 9) {
				ConvertedNumber.push_back(55 + (InNumber % Base));
				InNumber -= (InNumber % Base);
				InNumber /= Base;
			}
			else
			{
				ConvertedNumber.push_back(48 + (InNumber % Base));
				InNumber -= (InNumber % Base);
				InNumber /= Base;
			}
		}
	}
	cout << "Your Converted Number: ";
	vector<char>::iterator MyIterator;
	MyIterator = ConvertedNumber.end();
	LoopOn = true;
	--MyIterator;
	while (LoopOn)
	{
		if (MyIterator == ConvertedNumber.begin()) {
			LoopOn = false;
		}
		cout << *MyIterator;
		if (MyIterator != ConvertedNumber.begin()) {
			--MyIterator;
		}
	}
	cout << endl;
	system("pause");
    return 0;
}

