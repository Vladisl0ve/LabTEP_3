#include <iostream>
#include "CTable.h"
#include <string>

/*
	Remove couts for testings

*/
int main() {

	CTable c_tab_0, c_tab_1;
	c_tab_0.bSetNewSize(6);
	c_tab_1.bSetNewSize(4);


	for (int ii = 0; ii < 6; ii++)
	{
		c_tab_0.vSetValueAt(ii, ii + 1);
	}
	for (int ii = 0; ii < 4; ii++)
	{
		c_tab_1.vSetValueAt(ii, ii + 51);
	}
	c_tab_0.vSetValueAt(0, 23);
	c_tab_1.vSetValueAt(0, 23);
	c_tab_0.vSetValueAt(1, 23);
	c_tab_1.vSetValueAt(0, 23);
	c_tab_0.vPrint();
	c_tab_1.vPrint();

	cout << "#########" << endl;
	CTable c_tab_2 = c_tab_0.operator*(c_tab_1);

	c_tab_2.vPrint();
	system("pause");
}