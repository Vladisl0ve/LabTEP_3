#include <iostream>
#include "CTable.h"
#include "CFileErrCode.h"
#include "CFileLastError.h"
#include "CFileThrowEx.h"
#include "CRange.h"
#include <string>

int main() {

	//CFileThrowEx cfte;
	//cfte.vOpenFile("CFTE_Text.txt");
	//cfte.vPrintLine("F");
	//cfte.vCloseFile();
	//cfte.vCloseFile();

	//CFileErrCode cfec;
	//cfec.bOpenFile("CFEC_Text.txt");
	//cfec.bPrintLine("F");
	//cfec.bCloseFile();
	//cout << cfec.bCloseFile() << endl;

	//CFileLastError cfle;
	//cfle.vOpenFile("CFLE_Text.txt");
	//cfle.vPrintLine("F");
	//cfle.vCloseFile();
	//cfle.vCloseFile();
	//cout << cfle.bGetLastError() << endl;

	CRange range(10, 100, 2);
	cout << range.iValue << endl;
	range.vSetValue(55);
	cout << range.iValue << endl;
	CRange range2;
	range2 = range;
	cout << range2.iValue << endl;
	range2 = 1000;
	cout << range2.iValue << endl;

	system("pause");
}