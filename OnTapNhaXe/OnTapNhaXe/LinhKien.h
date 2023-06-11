#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class LinhKien
{
protected:
	string id, brand;
	long int money;
	int type;
	char tenloai;
public:
	virtual void nhap();
	virtual void xuat(ostream& os) = 0;

};

