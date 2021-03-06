#ifndef Thuvienchuan
#define Thuvienchuan

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <ctime>
#include <limits>

extern bool kiemtra;
extern bool tuychinh;


typedef struct{
	int docgia;
	int thuthu;
	int quanli;
} Chucnang;

typedef struct{
	int Maso;
	std::string Taikhoan;
	std::string Matkhau;
	std::string Biethieu;
	Chucnang ngdung;
} Nguoidung;

typedef struct{
	int maso;
	std::string hoten;
	std::string namsinh;
	std::string diachi;
	std::string truong;
	std::string CMND;
	std::string gioitinh;
	std::string khoa;
} thongtin_nguoidung;


typedef struct{
	bool kiemtra;
	int Maso;
	std::string Taikhoan;
	Chucnang ngdung;
} NguoidungDangnhap;


#endif