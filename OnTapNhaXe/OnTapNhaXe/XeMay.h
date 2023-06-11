#pragma once
#include"BanhXe.h"
#include"DongCo.h"
#include"KhungXe.h"
#include"LinhKien.h"
class XeMay
{
protected:
	string msxe;
	DongCo a;
	BanhXe b1, b2;
	KhungXe c;
public:
	void nhapXe();
	void xuatXe(ostream&ost);

};

