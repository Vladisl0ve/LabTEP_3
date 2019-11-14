#include "CRange.h"

CRange::CRange(int iLowNew, int iHighNew, int iVal)
{
	iLow = iLowNew;
	iHigh = iHighNew;
	try
	{
		if (iVal > iHigh)
			throw - 2;
		if (iVal < iLow)
			throw - 1;

		iValue = iVal;
	}
	catch (int e)
	{
		cout << "An exception # " << e << "\n";
		cout << "IValue had set on the next iLow's position" << endl;
		iValue = iLow + 1;
	}
}
CRange::CRange()
{
	iLow = 0;
	iHigh = 100;
	iValue = 1;
}
void CRange::vSetValue(int iVal)
{
	try
	{
		if (iVal > iHigh)
			throw - 2;
		if (iVal < iLow)
			throw - 1;
		iValue = iVal;
	}
	catch (int e)
	{
		cout << "An exception # " << e << "\n";
	}
}

CRange CRange::operator=(CRange & pcNewVal)
{
	this->iHigh = pcNewVal.iHigh;
	this->iLow = pcNewVal.iLow;
	this->iValue = pcNewVal.iValue;
	return *this;
}

CRange CRange::operator=(int iNewVal)
{
	try
	{
		if (iNewVal > iHigh)
			throw - 2;
		if (iNewVal < iLow)
			throw - 1;

		this->iValue = iNewVal;
	}
	catch (int e)
	{
		cout << "An exception # " << e << "\n";
	}

	return *this;
}

CRange::~CRange()
{
}
