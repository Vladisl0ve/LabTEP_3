#include "CTable.h"

CTable::CTable()
{
	sName = CONST_NAME;
	piTable = new int[CONST_SIZE];
	iSize = CONST_SIZE;
	cout << "Bezp: " << sName << endl;
}

CTable::CTable(string s_Name, int iTableLen)
{
	this->vSetName(s_Name);
	this->bSetNewSize(iTableLen);
	cout << "Parametr: " << sName << endl;
}

CTable::CTable(const CTable& pcOther)
{
	sName = pcOther.sName + "_copy";
	piTable = pcOther.piTable;
	cout << "Kopuj: " << sName << endl;
}

void CTable::vSetName(string s_Name)
{
	sName = s_Name;
}

bool CTable::bSetNewSize(int iTableLen)
{
	if (!bCheckErrForNewTable(iTableLen))
		return false;

	int* pi_newTable = new int[iTableLen];
	iSize = iTableLen;
	delete piTable;
	piTable = pi_newTable;
	return true;
}

CTable* CTable::pcClone() {
	CTable* copy = new CTable(sName, iSize);
	return copy;
}

CTable CTable::operator+(CTable& pcNewVal)
{
	int newSize = pcNewVal.iSize + iSize;
	int* piTableNew = new int[newSize];
	for (int ii = 0; ii < iSize; ii++)
	{
		piTableNew[ii] = piTable[ii];
	}
	for (int ii = iSize; ii < newSize; ii++)
	{
		piTableNew[ii] = pcNewVal.piTable[ii-iSize];
	}
	delete piTable;
	piTable = piTableNew;
	iSize = newSize;
	return *this;
}

void CTable::vShowName()
{
	cout << "Name: " << sName << endl;
}

void CTable::vShowSize()
{
	cout << "Size: " << iSize << endl;
}

bool CTable::bCheckErr(int iCheackable)
{
	if (iCheackable < 0)
	{
		cout << "Error, new size must be greater than 0" << endl;
		cout << iCheackable << " is less than zero" << endl;
		return false;
	}
	if (iCheackable == 0)
	{
		cout << "Error, new size must be greater than 0" << endl;
		cout << iCheackable << " is equal to zero" << endl;
		return false;
	}
	return true;
}

bool CTable::bCheckErrForNewTable(int iCheackable)
{
	if (!bCheckErr(iCheackable))
		return false;

	if (iCheackable <= iSize)
	{
		cout << "Error, new size must be greater than previous size" << endl;
		cout << iCheackable << " is less than previous size" << endl;
		return false;
	}
	if (iCheackable == iSize)
	{
		cout << "Error, new size must be greater than previous size" << endl;
		cout << iCheackable << " is equal to previous size" << endl;
		return false;
	}
	return true;
}

void CTable::v_mod_tab(CTable* pcTab, int iNewSize)
{
	if (!bCheckErrForNewTable(iNewSize))
		return;

	pcTab->bSetNewSize(iNewSize);
}

void CTable::v_mod_tab(CTable cTab, int iNewSize)
{
	if (!bCheckErrForNewTable(iNewSize))
		return;
	cTab.bSetNewSize(iNewSize);
}

void CTable::vSetValueAt(int iOffset, int iNewVal)
{
	if (iOffset >= iSize) {
		cout << "Error, value must be less than table's size" << endl;
		cout << iOffset << " is greater than table's size (or equal to)" << endl;
		return;
	}
	piTable[iOffset] = iNewVal;
}

void CTable::vPrint()
{
	for (int ii = 0; ii < iSize; ii++)
	{
		cout << ii << ": " << piTable[ii] << endl;
	}
}

CTable::~CTable()
{
	cout << "Usuwam: " << sName << endl;
}