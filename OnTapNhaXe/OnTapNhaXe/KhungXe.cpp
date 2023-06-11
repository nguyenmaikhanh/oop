#include "KhungXe.h"

void KhungXe::nhap()
{
	LinhKien::nhap();
	do {
		cout << "1. Nhom\n";
		cout << "2. Nhua\n";
		cin >> type;
		switch (type) {
		case 1: this->money = 500; this->tenloai = 'Nhom'; break;
		case 2:this->money = 200; this->tenloai = 'Nhua'; break;
		default: cout << "Nhap lai!\n"; break;
		}
	} while (type < 1 || type >2);
}

void KhungXe::xuat(ostream& os)
{
	os <<"Khung xe: "<< id << "-" << tenloai << "-" << brand << "-" << money << endl;
}
