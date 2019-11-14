#pragma once
#include <iostream>
using namespace std;
class CRange
{
public:
	int iValue, iLow, iHigh;

	CRange(int low, int high, int val);
	CRange();
	void vSetValue(int iVal);
	CRange operator=(CRange& pcNewVal);
	CRange operator=(int iNewVal);


	~CRange();
private:
	int CONST_VALUE = 0;

};

