#include <iostream>
#include "CTable.h"

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
	cout << c_tab_1.piTable[0] << endl;

	c_tab_0.vPrint();
	cout << "##########" << endl;
	cout << c_tab_1.piTable[0] << endl;

	c_tab_1.vPrint();
	cout << "##########" << endl;
	c_tab_0 = c_tab_1;
	cout << &c_tab_0.piTable << endl;
	cout << &c_tab_1.piTable << endl;
	c_tab_1.vSetValueAt(2, 123);
	cout << "##########" << endl;
	c_tab_0.vPrint();
	cout << "##########" << endl;
	c_tab_1.vPrint();
	cout << "##########" << endl;
	system("pause");
}