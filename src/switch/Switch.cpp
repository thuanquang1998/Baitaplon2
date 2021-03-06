﻿#include <switch.h>
#include <Chucnang.h>
#include <Doi_matkhau.h>
#include <lichsu_dangnhap.h>
#include <tuychon.h>
#include <switch_nguoidung.h>

using namespace std;

int Caidat(){
	system("cls");

	cout<<"Moi ban chon tuy chon: "<<endl;
	cout<<"1.	Them chuc nang"<<endl;
	cout<<"2.	Huy chuc nang"<<endl;
	//cout<<"3.	Them tai khoan"<<endl;
	cout<<"3.	Doi mat khau"<<endl;
	cout<<"4.	Quay lai"<<endl;

	cout<<"Lua chon cua ban la: ";
	int chon;
	cin>>chon;
	return chon;

}


void Caidat_switch(vector<Nguoidung>& Dangnhap, Nguoidung & Ngdung_dangnhap){

	// ở đây lại không bị lỗi tốc độ
	// khi trong switch break thì ra khỏi switch 
	// rồi chạy lại dòng while

	while(true){
		switch(Caidat()){
			case 1:
				Themchucnang(Dangnhap,Ngdung_dangnhap);
				break;
			case 2:
				Huychucnang(Dangnhap,Ngdung_dangnhap);
				break;
			//case 3:break;
			case 3:
				cin.ignore();
				if(!Doimatkhau(Dangnhap,Ngdung_dangnhap))
					tuychinh=false;
				// cả if và else đều break 
				// thì sao không để ngoài
				break;
			case 4:
				//quay lại cái switch ở trên
				/*tuychinh=false;
				break;*/
				return;
		}// hết switch
	}// hết while
}// hết hàm



void Switch_Chucnang(vector<thongtin_nguoidung>& Dangki_taikhoan,vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){

	switch(Tuychon_chucnang(Dangnhap,Ngdung_dangnhap)){

		// do hàm main dựa vào tuychinh và kiemtra
		// để chạy hàm này
		// mà hàm này không thay đổi tùy chỉnh
		// thì khi vào switch 
		// break và return như nhau???

		// Độc giả
		case 1:{
			if (Ngdung_dangnhap.ngdung.docgia==1){
				Switch_docgia(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap);
				break;
				// do tuychinh và kiemtra không đổi,
				// nên ngoài hàm main sẽ tiếp tục chạy hàm này
				// nên sẽ hiện ra tùy chọn tiếp

				// lỗi ẩn tốc độ, mỗi lần gọi hàm
				// nên để while chỗ này và chỗ ngoài không để if
				// ?????????????????????????????
			}
			
			cout<<"Chuc nang cua ban chua duoc kich hoat."<<endl;
			cout<<"Ban co muon chon chuc nang khac"<<endl;
			cin.ignore();
			string y;
			getline(cin,y);
			if(y =="y")
				break;
			return;

			
		 }// case docgia

		// thủ thư
		case 2:{
			if(Ngdung_dangnhap.ngdung.thuthu==2){
				Switch_thuthu(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap);
				break;
			}
			
			cout<<"Chuc nang cua ban chua duoc kich hoat."<<endl;
			cout<<"Ban co muon chon chuc nang khac"<<endl;
			cin.ignore();
			string y;
			getline(cin,y);
			if(y =="y")
				break;
			return;
		 }// case thủ thư
	
		// quản lý
		case 3:{
			if(Ngdung_dangnhap.ngdung.quanli==3){
				Switch_quanli(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap);
				break;
			}

			cout<<"Chuc nang cua ban chua duoc kich hoat."<<endl;
			cout<<"Ban co muon chon chuc nang khac"<<endl;
			cin.ignore();
			string y;
			getline(cin,y);
			if(y =="y")
				break;
			return;
		 }// case quản lý

		// lịch sử đăng nhập
		case 4:
			if(!dangnhap_lichsu(Ngdung_dangnhap)){
				cout<<"Khong thuc hien duoc"<<endl;
			}
			system("pause");
			break;

		// đăng xuất
		case 5:
			kiemtra=false;
			// nên hàm while sẽ chạy if (!kiemtra)
			// nên sẽ chạy lại màn hình chính

			// tao hàm?
			time_t now = time(0);
			localtime(&now);
			char* dangxuat = ctime(&now);

				
			fstream file("lichsu_dangnhap.txt",ios::app);
			if(!file.is_open()){
				cout<<"loi mo file"<<endl;
					
			}
			file<<Ngdung_dangnhap.Maso<<"	"<<"0	"<<dangxuat;

			file.close();
			return; 
	}// hết switch
}// hết hàm


