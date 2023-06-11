#include "DongCo.h"

void DongCo::nhap()
{
	LinhKien::nhap();
	do{
	cout << "1. Loai A\n";
	cout << "2. Loai B\n";
	cout << "3. Loai C\n";
	cin >> type;
	switch (type) {
	case 1: this->money = 500; this->tenloai = 'A'; break;
	case 2: {
		this->tenloai = 'B';
		
		do {
			cout << "Nhap tieu chuan 1,2,3\n";
			cin >> tieu_chuan;
			if (tieu_chuan == 1) this->money = 600; break;
			if (tieu_chuan == 2) this->money = 700; break;
			if (tieu_chuan == 3) this->money = 800; break;
			if (tieu_chuan < 1 || tieu_chuan>3) cout << "Nhap lai!"; break;

		} while (tieu_chuan < 1 || tieu_chuan>3);
		break;
	}
	case 3:this->money = 400; break;
	default: cout << "Nhap lai!\n"; break;
	}
	} while (type < 1 || type >3);

}

void DongCo::xuat(ostream& os)
{
	os << "Dong co: " << id << "-" << tenloai << "-";
	if (tenloai == 'B') {
		os << tieu_chuan << "-";
	}
	os << brand << "-" <<this-> money << endl;
	
}
