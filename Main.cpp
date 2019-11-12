#include <iostream>
#include "CTable.h"
#include "CFileErrCode.h"
#include "CFileLastError.h"
#include "CFileThrowEx.h"
#include <string>

int main() {

	CFileThrowEx cfte;
	cfte.vOpenFile("CFTE_Text.txt");
	cfte.vPrintLine("F");

	system("pause");
}