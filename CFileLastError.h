#pragma once
#include <string>
#include <vector>
using namespace std;
class CFileLastError
{
private:
	bool b_last_error;
public:
	bool bGetLastError() { return(b_last_error); }
	CFileLastError();
	CFileLastError(string sFileName);
	~CFileLastError();
	void vOpenFile(string sFileName);
	void vCloseFile();
	void vPrintLine(string sText);
	void vPrintManyLines(vector<string> sText);
private:
	FILE* pf_file;
};//class CFileLastError

