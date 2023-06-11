#include "LinhKien.h"

void LinhKien::nhap()
{
	cin.ignore();
	cout << "Nhap id: ";
	getline(cin, id);
	cout << "Nhap hang:";
	getline(cin, brand);

}

