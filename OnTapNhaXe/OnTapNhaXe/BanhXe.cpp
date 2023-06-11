#include "BanhXe.h"

void BanhXe::nhap()
{
	LinhKien::nhap();
	do {
		cout << "1. Loai D\n";
		cout << "2. Loai E\n";
		cin >> type;
		switch (type) {
		case 1: this->money = 400; tenloai = 'D'; break;
		case 2: this->money = 300; tenloai = 'E'; break;
		default: cout << "Nhap lai!\n"; break;

		}
	} while (type < 1 || type>2);
}

void BanhXe::xuat(ostream& os)
{
	os << id << "-" << tenloai << "-" << brand << "-" << money<<endl;
}