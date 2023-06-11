#pragma once
#include"LinhKien.h"
class DongCo:public LinhKien
{	
protected:
	
	int tieu_chuan;
public:
	
	void nhap();
	void xuat(ostream& os);
};

