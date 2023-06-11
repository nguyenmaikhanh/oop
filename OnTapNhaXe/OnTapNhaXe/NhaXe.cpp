#include "NhaXe.h"

void NhaXe::nhapds()
{
	cout << "Nhap so luong xe: ";
	cin >> n;
	XeMay* p;
	p = new XeMay;
	for (int i = 0; i < n; i++) {
		p->nhapXe();
		ds.push_back(p);
	}

}

void NhaXe::xuatds(ostream& os)
{
	for (int i = 0; i < n; i++) {
		ds[i]->xuatXe(os);
		cout << "***********\n";
	}
}

NhaXe::~NhaXe()
{
	this->ds.clear();
}
