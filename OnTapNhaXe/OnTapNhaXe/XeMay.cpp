#include "XeMay.h"

void XeMay::nhapXe()
{
	cin.ignore();
	cout << "Nhap ma so xe: ";
	cin >> msxe;
	cout << "Nhap dong co:\n";
	a.nhap();
	cout << "Nhap banh xe 1:\n";
	b1.nhap();
	cout << "Nhap banh xe 2:\n";
	b2.nhap();
	cout << "Nhap khung xe:\n";
	c.nhap();

}

void XeMay::xuatXe(ostream& ost)
{
	a.xuat(ost);
	ost << "Banh xe 1: ";
	b1.xuat(ost);
	ost << "Banh xe 2: ";
	b2.xuat(ost);
	c.xuat(ost);
}
