#include "CFileThrowEx.h"
#pragma warning (disable : 4996)


CFileThrowEx::CFileThrowEx()
{
	pf_file = NULL;
}

CFileThrowEx::CFileThrowEx(string sFileName)
{
	vOpenFile(sFileName);
}


CFileThrowEx::~CFileThrowEx()
{
	vCloseFile();
}

void CFileThrowEx::vOpenFile(string sFileName)
{
	try
	{
		pf_file = fopen(sFileName.c_str(), "w+");
	}
	catch (int e)
	{
		cout << "An exception # " << e << '\n';
	}
}

void CFileThrowEx::vCloseFile()
{
	try
	{
		fclose(pf_file);
	}
	catch (int e)
	{
		cout << "An exception # " << e << '\n';
	}
}

void CFileThrowEx::vPrintLine(string sText)
{
	try
	{
		throw fprintf(pf_file, sText.c_str());
	}
	catch (exception e)
	{
		cout << "HUY"<< '\n';
	}

}

void CFileThrowEx::vPrintManyLines(vector<string> sText)
{
	try
	{
		for (int i = 0; i < sText.size(); i++)
		{
			vPrintLine(sText[i]);
		}
	}
	catch (int e)
	{
		cout << "An exception # " << e << '\n';
	}

}