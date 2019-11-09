#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class CFileThrowEx
{
public:
	CFileThrowEx();
	CFileThrowEx(string sFileName);
	~CFileThrowEx();
	void vOpenFile(string sFileName);
	void vCloseFile();
	void vPrintLine(string sText);
	void vPrintManyLines(vector<string> sText);
private:
	FILE* pf_file;
};//class CFileThrowEx