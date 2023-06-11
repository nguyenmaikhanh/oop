#pragma once
#include"XeMay.h"
#include<vector>
class NhaXe
{
	int n;
	vector<XeMay*> ds;
public:
	void nhapds();
	void xuatds(ostream& os);
	~NhaXe();

};

