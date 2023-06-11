#include<iostream>
using namespace std;
#include"LinhKien.h"
#include"DongCo.h"
#include<fstream>
#include"NhaXe.h"
int main() {
	NhaXe a;
	a.nhapds();
	a.xuatds(cout);
	ofstream outfile;
	outfile.open("danh_sach_xe_may.txt");
	a.xuatds(outfile);
	outfile.close();
	
}